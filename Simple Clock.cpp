// Simple Clock
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int hour, minute, second, a, err;
    err = a = 0;
    while (err == 0)
    {
        // Taking time form user
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;

        if (hour <= 12 && minute < 60 && second < 60)
        {
            err++;
        }
        else
        {
            system("cls");
        }
    }
    while (a == 0)
    {
        system("cls");
        cout << "\n\n\t\t This is Current Time\n";
        cout << hour << " : " << minute << " : " << second << "\n";

        Sleep(1000);
        second++;

        // If second will 60 then minute will increase
        if (second > 59)
        {
            second = 1;
            minute++;
        }
        // If minute will 60 then hour will increase
        if (minute > 59)
        {
            minute = 0;
            hour++;
        }
        // If hour will 12 then hour will again 1
        if (hour > 12)
        {
            hour = 1;
        }
    }
    return 0;
}