# Smart Driver Drowsiness & Safety System

Our project is a driver safety prototype designed to monitor a driver, identify possible drowsiness or distraction, and respond with suitable alerts. 

## 🌟 Key Features
* **Drowsiness & Distraction Detection:** Checks if the driver's eyes stay closed for too long or if the driver keeps looking away from the road. 
* **Smart Alerts:** Gives a normal warning first, and a loud alarm if they ignore it. 
* **Automatic Music Control:** Pauses or lowers the car's music volume during the warning so the alert can be heard. 
* **Emergency SMS:** Sends a text message to a saved family contact in critical cases. 
* **Status Tracking:** Displays live status as Good, Warning, or Critical and saves the event history. 

## 💻 Technology Stack
* **Programming Language:** C++. 
* **Computer Vision:** OpenCV for face and eye tracking. 
* **Database:** SQLite for storing driver details, contacts, and past records. 
* **Core Data Structures:** Linked List (history), Queue (events), and Stack (recent alerts).
* **System Logic:** Threads to run camera monitoring and alert work at the same time. 

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
   Compile the C++ files ensuring you link both the OpenCV and SQLite libraries.
4. **Run the executable:**
   Execute the compiled program to launch the camera feed and safety system.

## 👥 The Smart Safety Team
This project was developed by **Team DSCPP-III-2026-T234** under the mentorship of **Mr. Kamal Kumar Gola**: 
* **Ridvik Garg (Team Lead):** Core Logic & Architecture.
* **Prabhav Gulyani:** OpenCV Drowsiness Code.
* **Nandini Gupta:** SQLite & Distraction Code.
* **Antriksh Gehlot:** Music Control & Alerts.
