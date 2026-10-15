
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void emergencyAlert(string name, string phone)
{
    ofstream file("emergency_log.txt", ios::app);

    cout << "\n--- EMERGENCY ALERT ---" << endl;
    cout << "Driver: " << name << endl;
    cout << "Family Contact: " << phone << endl;
    cout << "Status: CRITICAL" << endl;
    cout << "Emergency alert recorded." << endl;

    if (file.is_open())
    {
        file << "Driver: " << name
             << ", Contact: " << phone
             << ", Status: CRITICAL" << endl;

        file.close();
    }
}
