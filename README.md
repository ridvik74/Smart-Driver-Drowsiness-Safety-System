# Smart Driver Drowsiness & Safety System

Our project is a driver safety prototype designed to monitor a driver, identify possible drowsiness or distraction, and respond with suitable alerts to prevent accidents. 

## 🌟 Key Features
* **Drowsiness & Distraction Detection:** Uses a camera to check if the driver's eyes stay closed or if they look away from the road for too long.
* **Smart Alerts:** Issues a normal warning first, followed by a loud alarm if ignored.
* **Automatic Music Control:** Pauses or lowers the car's music volume during a warning so the driver can actually hear the alert.
* **Emergency SMS:** Sends a text message to a registered family contact in critical situations.
* **Status Tracking:** Displays live safety conditions as Good, Warning, or Critical and saves the event history.

## 💻 Technology Stack
* **Programming Language:** C++
* **Computer Vision:** OpenCV for real-time face and eye tracking
* **Database:** SQLite for storing driver details, contacts, and past records
* **Core Data Structures:** Linked List (event history), Queue (safety events), and Stack (recent alerts)
* **Operating System Concepts:** Threads for running camera and alerts simultaneously

## 🛠️ Installation & Setup 

### Prerequisites
To run this project locally, you will need to have the following installed on your system:
* A C++ Compiler (e.g., GCC/MinGW or MSVC)
* [OpenCV](https://opencv.org/) (Computer Vision Library)
* [SQLite3](https://www.sqlite.org/) (Database Engine)

### How to Run
1. **Clone the repository:**
   `git clone https://github.com/ridvik74/Smart-Driver-Drowsiness-Safety-System.git`
2. **Navigate to the project directory:**
   `cd Smart-Driver-Drowsiness-Safety-System`
3. **Compile the code:** 
   Compile the C++ files ensuring you link both the OpenCV and SQLite libraries. (e.g., using `g++` or your configured VS Code build task).
4. **Run the executable:**
   Execute the compiled program to launch the camera feed and safety system.

## 👥 The Smart Safety Team
This project was developed by **Team DSCPP-III-2026-T234** under the mentorship of **Mr. Kamal Kumar Gola**:
* **Ridvik Garg (Team Lead):** Core Logic & Architecture
* **Prabhav Gulyani:** OpenCV Drowsiness Code
* **Nandini Gupta:** SQLite & Distraction Code
* **Antriksh Gehlot:** Music Control & Alerts
