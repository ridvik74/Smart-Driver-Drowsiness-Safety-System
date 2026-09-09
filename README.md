# Smart Driver Drowsiness & Safety System

Our project is a driver safety prototype designed to monitor a driver, identify possible drowsiness or distraction, and respond with suitable alerts to prevent accidents[span_0](start_span)[span_0](end_span)[span_1](start_span)[span_1](end_span). 

## 🌟 Key Features
* **Drowsiness & Distraction Detection:** Uses a camera to check if the driver's eyes stay closed or if they look away from the road for too long[span_2](start_span)[span_2](end_span)[span_3](start_span)[span_3](end_span).
* **Smart Alerts:** Issues a normal warning first, followed by a loud alarm if ignored[span_4](start_span)[span_4](end_span).
* **Automatic Music Control:** Pauses or lowers the car's music volume during a warning so the driver can actually hear the alert[span_5](start_span)[span_5](end_span).
* **Emergency SMS:** Sends a text message to a registered family contact in critical situations[span_6](start_span)[span_6](end_span)[span_7](start_span)[span_7](end_span).
* **Status Tracking:** Displays live safety conditions as Good, Warning, or Critical and saves the event history[span_8](start_span)[span_8](end_span)[span_9](start_span)[span_9](end_span).

## 💻 Technology Stack
* **Programming Language:** C++[span_10](start_span)[span_10](end_span)[span_11](start_span)[span_11](end_span)
* **Computer Vision:** OpenCV for real-time face and eye tracking[span_12](start_span)[span_12](end_span)[span_13](start_span)[span_13](end_span)
* **Database:** SQLite for storing driver details, contacts, and past records[span_14](start_span)[span_14](end_span)[span_15](start_span)[span_15](end_span)
* **Core Data Structures:** Linked List (event history), Queue (safety events), and Stack (recent alerts)[span_16](start_span)[span_16](end_span)[span_17](start_span)[span_17](end_span)
* **Operating System Concepts:** Threads for running camera and alerts simultaneously[span_18](start_span)[span_18](end_span)[span_19](start_span)[span_19](end_span)

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
This project was developed by **Team DSCPP-III-2026-T234** under the mentorship of **Mr. Kamal Kumar Gola**[span_20](start_span)[span_20](end_span)[span_21](start_span)[span_21](end_span):
* **Ridvik Garg (Team Lead):** Core Logic & Architecture[span_22](start_span)[span_22](end_span)[span_23](start_span)[span_23](end_span)
* **Prabhav Gulyani:** OpenCV Drowsiness Code[span_24](start_span)[span_24](end_span)[span_25](start_span)[span_25](end_span)
* **Nandini Gupta:** SQLite & Distraction Code[span_26](start_span)[span_26](end_span)[span_27](start_span)[span_27](end_span)
* **Antriksh Gehlot:** Music Control & Alerts[span_28](start_span)[span_28](end_span)[span_29](start_span)[span_29](end_span)

