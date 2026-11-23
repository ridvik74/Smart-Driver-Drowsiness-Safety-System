# Smart Driver Drowsiness & Safety System 🚗💤

**Academic Coursework:** Project Based Learning (PBL) — Phase 3  
**Team Code:** DSCPP-III-2026-T234  
**Project Category:** Road Safety & Automotive Driver Assistance  
**Assigned Mentor:** Mr. Kamal Kumar Gola  
**Affiliation:** Department of Computer Science & Engineering  

---

## 📌 1. Project Title & Overview
The **Smart Driver Drowsiness & Safety System** is an intelligent, real-time vehicular safety prototype built using C and C++. It monitors the driver’s face and eye movements through a camera stream, analyzes drowsiness indicators, triggers multi-level auditory and visual warnings, logs safety incidents to an embedded database, and maintains black-box telemetry using fundamental Data Structures in C.

---

## 🎯 2. Problem Statement & Objectives

### Problem Statement
Driver fatigue and microsleep are responsible for a significant percentage of severe highway road accidents worldwide. Prolonged driving without sufficient rest reduces reaction times and situational awareness. Most existing driver monitoring solutions are either high-cost commercial installations or suffer from high false-alarm rates triggered by natural eye blinking.

### Objectives
1. **Real-Time Optical Monitoring:** Accurately track facial features and eye closure states using OpenCV.
2. **Anti-Fluctuation Blink Filtering:** Apply temporal smoothing algorithms to differentiate natural blinks (< 300ms) from microsleep and drowsiness (> 1.2s warning, > 2.5s critical).
3. **Data Structures Integration (C):** Implement Queue (FIFO), Stack (LIFO), Linked List, Searching, and Sorting algorithms for in-memory safety telemetry.
4. **Persistent Incident Storage (C++):** Store driver profiles and safety state events using an embedded **SQLite3** relational database.
5. **Emergency Intervention:** Provide immediate multi-tier alarms (Audio chime/buzzer) and write critical SOS logs to `emergency_log.txt`.

---

## 👥 3. Team Members & Individual Contributions

| Team Member | GitHub Username | Assigned Role | Key Modules / Contributions |
| :--- | :--- | :--- | :--- |
| **Antriksh Gehlot (Lead)** | `@antrikshgehlot` | Vision Engine & Lead Dev | Real-time OpenCV video stream, Facial/Eye detection, Temporal Blink Filter (`camera.cpp`), Non-blocking Audio Buzzer, System Integration |
| **Ridvik** | `@ridvik...` | DSA Engineer (C) | Queue Data Structure (`events.c`), Stack Alert Vault (`stack.c`), FIFO/LIFO event processing |
| **Prabhav** | `@Prabhav...` | Algorithms & Data Flow (C) | Singly Linked List (`linkedlist.c`), Bubble Sort for incident severity (`sorting.c`), Linear Search for event lookup (`searching.c`) |
| **Nandini** | `@nandini...` | Backend & Persistence (C++) | SQLite3 Database integration (`database.cpp`), Emergency alert file I/O (`emergency.cpp`), Driver data models (`driver.c`, `driver.h`) |

---

## 🛠️ 4. Technologies & Tools Used

- **Programming Languages:** C (C99 Standard for Data Structures) & C++ (C++11/C++17 for System OOP & Threading)
- **Computer Vision:** OpenCV (v4 / v5 C++ API) with Pre-trained Haar Cascade Classifiers
- **Database:** SQLite3 Relational Database Engine
- **Concurrency:** C++ Multi-threading (`std::thread`, `std::atomic`) for zero-lag asynchronous buzzer audio
- **Build & Development Tools:** GCC/G++ Toolchain, MSYS2 UCRT64, Visual Studio Code, Git & GitHub

---

## 🏗️ 5. Major Features & Architecture Mapping

### A. Data Structures Implemented in C
- **Queue (FIFO - `DSA/events.c`):** Records continuous chronological event streams (`1: SAFE`, `2: WARNING`, `3: CRITICAL`).
- **Stack (LIFO - `DSA/stack.c`):** Functions as a vehicle "Black Box" vault, storing high-priority critical alerts in reverse order (most recent alert at the top).
- **Linked List (`DSA/linkedlist.c`):** Dynamic memory-managed history chain (`struct Node`) maintaining trip event nodes.
- **Bubble Sort (`DSA/sorting.c`):** In-place sorting of recorded driver events by severity order.
- **Linear Search (`DSA/searching.c`):** $O(N)$ lookup for finding specific safety events in the telemetry array.

### B. Object-Oriented & Safety Subsystems in C++
- **OpenCV Vision Engine (`CAMERA/camera.cpp`):**
  - Grayscale contrast equalization (`equalizeHist`) for dim-lighting adaptation.
  - Strict eye-region bounding box targeting driver eyes (20% to 55% vertical face height).
  - Anti-fluctuation filter with rapid blink recovery (`closedFrameCount - 5`).
  - Thread-safe non-blocking audio buzzer (`Beep`) operating in a detached background thread.
- **SQLite3 Database (`database.cpp`):**
  - Manages `driver.db` with table `history (id INTEGER PRIMARY KEY, name TEXT, event INTEGER)`.
- **Emergency Dispatcher (`emergency.cpp`):**
  - File handling via `std::ofstream` appending critical driver incidents and contact details to `emergency_log.txt`.

---

## 📂 6. Repository Structure

```text
Smart-Driver-Safety-System/
│
├── src/
│   └── main.cpp             # Central controller, menu & DSA orchestration
│
├── CAMERA/
│   └── camera.cpp           # OpenCV face/eye tracking, blink filter & audio alarms
│
├── DSA/
│   ├── events.c             # Queue implementation (FIFO)
│   ├── stack.c              # Stack implementation (LIFO)
│   ├── linkedlist.c         # Singly Linked List implementation
│   ├── searching.c          # Linear search algorithm
│   └── sorting.c            # Bubble sort algorithm
│
├── database.cpp             # SQLite3 database operations (driver.db)
├── emergency.cpp            # Emergency SOS alert logging (emergency_log.txt)
├── driver.c                 # Driver input & details handler
├── driver.h                 # Driver struct definition
│
├── PHASE-I/                 # Phase 1 project documentation & PPT
├── Phase-II/                # Phase 2 evaluation materials & code
├── build.sh                 # Unified build automation script
└── README.md                # Project documentation
```

---

## 🚀 7. Project Setup & Execution Guide

### Prerequisites
- Windows 10/11 with **MSYS2 UCRT64** environment.
- Required packages (install via MSYS2 terminal):
  ```bash
  pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-opencv mingw-w64-ucrt-x86_64-sqlite3 mingw-w64-ucrt-x86_64-pkgconf
  ```

### Build & Run
1. Clone the repository:
   ```bash
   git clone https://github.com/antrikshgehlot/Smart-Driver-Safety-System.git
   cd Smart-Driver-Safety-System
   ```
2. Compile all modules:
   ```bash
   bash build.sh
   ```
3. Run the executable:
   ```bash
   ./driver.exe
   ```

### Execution Steps
1. Enter Driver Name and Emergency Family Contact Number.
2. OpenCV camera stream initiates with Heads-Up Display (HUD):
   - **Green status:** Eyes open (Safe).
   - **Orange status:** Eyes closed > 1.2 seconds (Drowsiness Warning).
   - **Red status:** Eyes closed > 2.5 seconds (Critical Microsleep Alarm + Siren).
3. Press **'q'** or **'ESC'** on the camera window to terminate monitoring.
4. Terminal outputs complete DSA operations: Sorted array, Linear Search, Queue events, Stack alerts, Linked List chain, and SQLite3 records.

---

## 📊 8. Current Project Status & Progress

- **Phase 1 (Completed):** Problem definition, system architecture design, C Data Structure models.
- **Phase 2 (Completed):** SQLite3 database integration, emergency file logging, initial OpenCV camera capture.
- **Phase 3 (Completed & Verified):** Temporal blink filter (anti-fluctuation), multi-threaded asynchronous audio alarms, OpenCV 5 compatibility, unified C/C++ linking, and complete end-to-end integration testing.

---

## 📜 Academic Integrity Declaration
This project is an original academic submission for **PBL Phase 3** under the guidance of our mentor **Mr. Kamal Kumar Gola**. The commit history reflects the continuous and collaborative work of all team members.
