
#include <iostream>
#include <string>
using namespace std;

void openDatabase();
void closeDatabase();
void showDatabaseRecords(string name);
int getDatabaseEvents(int arr[], int max, string name);
int openCamera(string name, string phone);

extern "C"
{
    int searchEvent(int arr[], int n, int key);
    void sortEvents(int arr[], int n);
    void showEvents();
    void showAlerts();
    void showHistory();
}

int main()
{
    string name, phone;
    int arr[100];
    int n, key, pos;

    openDatabase();

    cout << "===================================" << endl;
    cout << " SMART DRIVER DROWSINESS SYSTEM" << endl;
    cout << "===================================" << endl;

    cout << "Enter driver name: ";
    cin >> name;

    cout << "Enter family contact number: ";
    cin >> phone;

    cout << "\nCamera is starting..." << endl;
    cout << "Keep your face visible to the camera." << endl;

    openCamera(name, phone);

    n = getDatabaseEvents(arr, 100, name);
    sortEvents(arr, n);

    cout << "\n--- Saved Events for " << name << " ---" << endl;

    if (n == 0)
    {
        cout << "No events found." << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";

            if ((i + 1) % 20 == 0)
                cout << endl;
        }
        cout << endl;
    }

    cout << "\n1 = SAFE, 2 = WARNING, 3 = CRITICAL" << endl;
    cout << "Search event number: ";
    cin >> key;

    if (key >= 1 && key <= 3)
    {
        pos = searchEvent(arr, n, key);

        if (pos != -1)
            cout << "Event found at position: " << pos + 1 << endl;
        else
            cout << "Event not found." << endl;
    }
    else
    {
        cout << "Invalid event number." << endl;
    }

    cout << "\n--- Queue Events ---" << endl;
    showEvents();

    cout << "\n--- Stack Alerts ---" << endl;
    showAlerts();

    cout << "\n--- Linked List History ---" << endl;
    showHistory();

    showDatabaseRecords(name);

    closeDatabase();

    cout << "\nProgram finished." << endl;

    return 0;
}
