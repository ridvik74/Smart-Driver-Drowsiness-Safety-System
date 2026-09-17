# Smart Driver Drowsiness & Safety System

## Project Title and Brief Description
**Smart Driver Drowsiness & Safety System** is a driver safety prototype designed to monitor a driver, identify possible drowsiness or distraction, and respond with suitable alerts to prevent accidents[span_2](start_span)[span_2](end_span)[span_3](start_span)[span_3](end_span). 

## Problem Statement/Objective
**Problem Statement:** If a driver gets tired, they can lose attention on the road, especially on long night trips. Many existing student projects only check for closed eyes and just give a basic beep sound, which is not enough to ensure safety[span_4](start_span)[span_4](end_span)[span_5](start_span)[span_5](end_span).
**Objective:** To build a working safety prototype that monitors the driver, warns them, automatically controls the car's music, and saves the events for history tracking[span_6](start_span)[span_6](end_span)[span_7](start_span)[span_7](end_span).

## Major Features/Modules
* **Drowsiness & Distraction Detection:** Checks if the driver's eyes stay closed for too long or if they look away from the road[span_8](start_span)[span_8](end_span)[span_9](start_span)[span_9](end_span).
* **Smart Alerts:** Gives a normal warning first, and a loud alarm if the driver ignores it[span_10](start_span)[span_10](end_span)[span_11](start_span)[span_11](end_span).
* **Automatic Music Control:** Pauses or lowers the car's music volume during the warning so the alert can be heard[span_12](start_span)[span_12](end_span)[span_13](start_span)[span_13](end_span).
* **Emergency SMS:** Sends a text message to a saved family contact in critical cases[span_14](start_span)[span_14](end_span)[span_15](start_span)[span_15](end_span).
* **Status Tracking:** Displays live status (Good, Warning, Critical) and saves event history[span_16](start_span)[span_16](end_span)[span_17](start_span)[span_17](end_span).

## Technologies/Tools Used
* **Programming Language:** C++[span_18](start_span)[span_18](end_span)[span_19](start_span)[span_19](end_span)
* **Computer Vision:** OpenCV for real-time face and eye tracking[span_20](start_span)[span_20](end_span)[span_21](start_span)[span_21](end_span)
* **Database:** SQLite for storing driver details, contacts, and past records[span_22](start_span)[span_22](end_span)[span_23](start_span)[span_23](end_span)
* **Data Structures:** Linked List (history), Queue (events), and Stack (recent alerts)[span_24](start_span)[span_24](end_span)[span_25](start_span)[span_25](end_span)
* **Development Tools:** VS Code, Git, and GitHub[span_26](start_span)[span_26](end_span)[span_27](start_span)[span_27](end_span)

## Project Setup/Installation Instructions
1. **Prerequisites:** Ensure you have a C++ compiler, OpenCV library, and SQLite3 installed on your machine.
2. **Clone the Repository:** 
   `git clone https://github.com/ridvik74/Smart-Driver-Drowsiness-Safety-System.git`
3. **Compile:** Compile the C++ source files, making sure to link both the OpenCV and SQLite libraries.
4. **Run:** Execute the compiled program to start the camera monitoring and safety system.

## Current Project Status/Progress
* **Phase-I (Completed):** Project planning, basic design, and system architecture are finished[span_28](start_span)[span_28](end_span)[span_29](start_span)[span_29](end_span).
* **Current Progress:** Requirements and modules have been finalized. The SQLite database tables have been created, and basic camera input with OpenCV has been successfully tested[span_30](start_span)[span_30](end_span)[span_31](start_span)[span_31](end_span).

## Team Members
* **Team Name:** Smart Safety Team (ID: DSCPP-III-2026-T234)[span_32](start_span)[span_32](end_span)[span_33](start_span)[span_33](end_span)
* **Mentor:** Mr. Kamal Kumar Gola[span_34](start_span)[span_34](end_span)[span_35](start_span)[span_35](end_span)
* **Ridvik Garg (Team Lead):** Core Logic & Architecture[span_36](start_span)[span_36](end_span)[span_37](start_span)[span_37](end_span)
* **Prabhav Gulyani:** OpenCV Drowsiness Code[span_38](start_span)[span_38](end_span)[span_39](start_span)[span_39](end_span)
* **Nandini Gupta:** SQLite & Distraction Code[span_40](start_span)[span_40](end_span)[span_41](start_span)[span_41](end_span)
* **Antriksh Gehlot:** Music Control & Alerts[span_42](start_span)[span_42](end_span)[span_43](start_span)[span_43](end_span)
*
