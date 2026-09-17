🚗 Smart Driver Drowsiness & Safety System

📌 Project Title and Brief Description

Smart Driver Drowsiness & Safety System is a C++-based driver safety prototype designed to monitor the driver in real time, detect possible drowsiness and distraction, and provide appropriate safety responses.

The system uses computer vision to analyze the driver's eyes and attention, provides multi-level alerts, controls the vehicle's music during warnings, sends an emergency SMS in critical situations, and maintains a record of safety events.

---

🎯 Problem Statement/Objective

⚠️ Problem Statement

Driver fatigue and distraction can significantly reduce attention, especially during long-distance and night-time driving. Many basic driver-monitoring systems only detect closed eyes and provide a simple beep, which provides limited safety functionality.

🎯 Objective

The objective of this project is to develop a working driver-safety prototype that:

- Detects driver drowsiness through eye monitoring.
- Detects possible driver distraction.
- Provides appropriate warning and critical alerts.
- Automatically pauses or lowers music during alerts.
- Sends an emergency SMS to a saved family contact in critical situations.
- Displays the driver's current safety status.
- Stores safety events for history tracking.

---

👥 Team Members

Team Name: Smart Safety Team
Team ID: "DSCPP-III-2026-T234"

Mentor: Mr. Kamal Kumar Gola

- Ridvik Garg (Team Lead) — Core Logic & System Architecture
- Prabhav Gulyani — OpenCV Drowsiness Detection
- Nandini Gupta — SQLite & Distraction Detection
- Antriksh Gehlot — Music Control & Alerts
---

🛠️ Technologies/Tools Used

Technology/Tool| Purpose
C++| Core system development
OpenCV| Real-time face and eye tracking
SQLite| Driver details, contacts, and event-history storage
Linked List| Managing safety history
Queue| Managing safety events
Stack| Managing recent alerts
VS Code| Development environment
Git| Version control
GitHub| Repository management and collaboration

---

⚙️ Project Setup/Installation Instructions

📋 Prerequisites

Ensure the following are installed on your system:

- C++ compiler
- OpenCV
- SQLite3
- VS Code
- Git

📥 Clone the Repository

git clone https://github.com/ridvik74/Smart-Driver-Drowsiness-Safety-System.git

📂 Navigate to the Project Directory

cd Smart-Driver-Drowsiness-Safety-System

🔧 Configure Dependencies

Configure the OpenCV and SQLite3 libraries according to your operating system and C++ development environment.

💻 Compile the Project

Compile the C++ source files while linking the required OpenCV and SQLite3 libraries.

▶️ Run the Project

After successful compilation, execute the generated program to start the camera-based driver monitoring and safety system.

---

🚨 Major Features/Modules

👁️ 1. Drowsiness Detection

Uses OpenCV-based camera monitoring to detect prolonged eye closure and identify possible signs of driver drowsiness.

👀 2. Distraction Detection

Monitors the driver's facial orientation and attention to identify possible cases where the driver looks away from the road.

🔔 3. Smart Alert System

Provides different levels of safety alerts based on the detected driver condition:

- 🟢 Good: Driver appears attentive.
- 🟡 Warning: Possible drowsiness or distraction detected.
- 🔴 Critical: The condition continues without an appropriate response.

🎵 4. Automatic Music Control

During warnings, the system can pause or lower the vehicle's music volume so that safety alerts can be clearly heard.

📱 5. Emergency SMS

In critical situations, the system can send an SMS notification to a predefined family contact.

📊 6. Status Tracking & Event History

Displays the current driver status and stores detected safety events for future history tracking.

---

📈 Current Project Status/Progress

✅ Phase-I — Completed

- Project planning completed.
- Basic system design completed.
- System architecture completed.
- Project requirements finalized.
- Major modules identified and planned.

🚧 Current Progress

- SQLite database tables have been created.
- Basic camera input using OpenCV has been successfully tested.
- Module responsibilities have been finalized.
- Drowsiness detection module is under development.
- Distraction detection module is under development.
- Alert, music-control, and emergency-SMS modules are under development.
- Final system integration and testing are pending.
