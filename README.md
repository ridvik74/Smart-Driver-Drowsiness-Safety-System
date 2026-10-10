# 🚗 Smart Driver Drowsiness & Safety System

## 📌 About the Project

The **Smart Driver Drowsiness & Safety System** is a student project developed to improve driver safety. It aims to identify unsafe driving conditions and provide suitable warnings to the driver.

The current prototype uses C++ to check eye-closure and distraction levels entered by the user. It displays one of three safety statuses: **Safe, Warning, or Critical**. OpenCV is used to access the webcam and display live video.

The project also uses Data Structures and Algorithms to manage safety events, recent alerts, and event history.

## 🎯 Objectives

- Identify possible driver drowsiness and distraction.
- Display safety status based on input values.
- Provide warning messages for unsafe conditions.
- Manage safety events using data structures.
- Integrate C, C++, OOP, DSA, and OpenCV in one project.

## 🛠️ Technology Stack

- **C:** Data Structures implementation
- **C++:** Main application and safety logic
- **OOP:** Driver information and safety-checking class
- **DSA:** Queue, Stack, and Linked List
- **OpenCV:** Webcam access and live video display
- **Visual Studio Code:** Development environment
- **GitHub:** Source code and project version control

## ⚙️ Main Features

1. **Safety Status:** Displays Safe, Warning, or Critical according to the entered values.
2. **Webcam Integration:** Opens the webcam and displays a live video feed.
3. **Queue:** Stores safety event codes.
4. **Stack:** Maintains recent alerts.
5. **Linked List:** Maintains event history.
6. **Modular Design:** Separates the main application, camera, and DSA code.

## 📂 Project Structure

```text
Smart-Driver-Drowsiness-Safety-System/
│
├── DSA/
│   ├── events.c
│   ├── stack.c
│   └── linkedlist.c
│
├── Phase-I/
│   ├── Report.pdf
│   ├── Report_Source_Code.tex
│   └── PPT_Source_Code.tex
│
├── Phase-II/
│   ├── Smart_Driver_PhaseII_Fixed.tex
│   └── Report.pdf
│
├── CAMERA/
│   └── camera.cpp
│
├── main.cpp
└── README.md
```

*Note: The file names above are the intended organization. Keep the README consistent with the actual files present in the repository.*

## ▶️ Current Implementation

The current prototype checks user-entered eye-closure and distraction levels, displays a safety status, and calls the DSA functions to record events and alerts. The webcam module displays live video using OpenCV.

## 🚀 Future Improvements

- Improve automatic drowsiness detection through camera input.
- Add and test searching and sorting operations for event records.
- Improve event history and safety monitoring.
- Test the complete application with different inputs and conditions.

## 👥 Team Details

**Team Name:** Smart Safety Team  
**Team ID:** DSCPP-III-2026-T234

- **Ridvik Garg** — Team Lead
- **Prabhav Gulyani** — Team Member
- **Nandini Gupta** — Team Member
- **Antriksh Gehlot** — Team Member

## 📄 Project Documents

- **Phase-I:** Project report and presentation
- **Phase-II:** Implementation report, source code, and presentation

Please refer to the respective folders for available project documents.

---

**Project:** Smart Driver Drowsiness & Safety System  
**University:** Graphic Era Deemed to be University, Dehradun
