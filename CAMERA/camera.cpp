
#include <opencv2/opencv.hpp>
#include <opencv2/xobjdetect.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

void saveEvent(string name, int event);
void emergencyAlert(string name, string phone);

extern "C"
{
    void addEvent(int val);
    void push(int val);
    void addHistory(int val);
}

int openCamera(string name, string phone)
{
    VideoCapture cap(0, CAP_DSHOW);

    if (!cap.isOpened())
    {
        cout << "Camera could not be opened." << endl;
        return 0;
    }

    CascadeClassifier faceCascade;
    CascadeClassifier eyeCascade;

    if (!faceCascade.load(
        "C:/msys64/ucrt64/share/opencv5/haarcascades/haarcascade_frontalface_default.xml"))
    {
        cout << "Face detection file could not be loaded." << endl;
        cap.release();
        return 0;
    }

    if (!eyeCascade.load(
        "C:/msys64/ucrt64/share/opencv5/haarcascades/haarcascade_eye.xml"))
    {
        cout << "Eye detection file could not be loaded." << endl;
        cap.release();
        return 0;
    }

    Mat frame, gray;

    int closedFrames = 0;
    int candidateEvent = 2;
    int candidateFrames = 0;
    int currentEvent = 2;
    int lastSavedEvent = -1;

    bool alertSent = false;

    string status = "WARNING: CHECK FACE/EYES";

    while (true)
    {
        cap >> frame;

        if (frame.empty())
            break;

        cvtColor(frame, gray, COLOR_BGR2GRAY);
        equalizeHist(gray, gray);

        vector<Rect> faces;

        faceCascade.detectMultiScale(
            gray,
            faces,
            1.1,
            5,
            0,
            Size(80, 80)
        );

        int rawEvent = 2;

        if (!faces.empty())
        {
            Rect face = faces[0];

            for (const Rect &f : faces)
            {
                if (f.area() > face.area())
                    face = f;
            }

            rectangle(
                frame,
                face,
                Scalar(0, 255, 0),
                2
            );

            Mat faceROI = gray(face);

            int upperHeight = faceROI.rows / 2;

            if (upperHeight > 0)
            {
                Mat upperFace = faceROI(
                    Rect(0, 0, faceROI.cols, upperHeight)
                );

                vector<Rect> eyes;

                eyeCascade.detectMultiScale(
                    upperFace,
                    eyes,
                    1.1,
                    4,
                    0,
                    Size(12, 12)
                );

                if (!eyes.empty())
                {
                    closedFrames = 0;
                    rawEvent = 1;

                    for (const Rect &eye : eyes)
                    {
                        rectangle(
                            frame,
                            Point(face.x + eye.x, face.y + eye.y),
                            Point(
                                face.x + eye.x + eye.width,
                                face.y + eye.y + eye.height
                            ),
                            Scalar(255, 0, 0),
                            2
                        );
                    }
                }
                else
                {
                    closedFrames++;

                    if (closedFrames >= 45)
                    {
                        rawEvent = 3;
                    }
                    else if (closedFrames >= 10)
                    {
                        rawEvent = 2;
                    }
                    else
                    {
                        rawEvent = currentEvent;
                    }
                }
            }
            else
            {
                closedFrames = 0;
                rawEvent = 2;
            }
        }
        else
        {
            closedFrames = 0;
            rawEvent = 2;
        }

        if (rawEvent == candidateEvent)
        {
            candidateFrames++;
        }
        else
        {
            candidateEvent = rawEvent;
            candidateFrames = 1;
        }

        int requiredFrames = 12;

        if (candidateEvent == 3)
        {
            requiredFrames = 15;
        }

        if (candidateFrames >= requiredFrames)
        {
            currentEvent = candidateEvent;
        }

        if (currentEvent == 1)
        {
            status = "SAFE: EYES DETECTED";
        }
        else if (currentEvent == 2)
        {
            status = "WARNING: CHECK FACE/EYES";
        }
        else
        {
            status = "CRITICAL: POSSIBLE DROWSINESS";
        }

        if (currentEvent != lastSavedEvent)
        {
            saveEvent(name, currentEvent);

            addEvent(currentEvent);
            push(currentEvent);
            addHistory(currentEvent);

            cout << "Status: " << status << endl;

            if (currentEvent == 3 && !alertSent)
            {
                emergencyAlert(name, phone);
                alertSent = true;
            }

            if (currentEvent == 1)
            {
                alertSent = false;
            }

            lastSavedEvent = currentEvent;
        }

        Scalar color(0, 0, 255);

        if (currentEvent == 1)
        {
            color = Scalar(0, 255, 0);
        }
        else if (currentEvent == 2)
        {
            color = Scalar(0, 255, 255);
        }

        putText(
            frame,
            status,
            Point(20, 35),
            FONT_HERSHEY_SIMPLEX,
            0.65,
            color,
            2
        );

        putText(
            frame,
            "Press ESC to close",
            Point(20, frame.rows - 20),
            FONT_HERSHEY_SIMPLEX,
            0.6,
            Scalar(255, 255, 255),
            2
        );

        imshow("Smart Driver Safety System", frame);

        if (waitKey(1) == 27)
        {
            break;
        }
    }

    cap.release();
    destroyAllWindows();

    return currentEvent;
}
