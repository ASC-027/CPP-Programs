#include <iostream>
#include <ctime>
#include <vector>
#include "time.hpp"

bool checkLeapYear(int year);

int main() {
    int days;
    std::string region = "the United States of America, CST";
    bool leapYear = checkLeapYear(year); 
    
    int newHour = hour;
    std::string meridiem;

    std::vector<std::string> daysOfWeek = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };

    std::vector<std::string> monthNames = {"Janurary", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    std::string dayName = daysOfWeek[dayOfWeek];
    std::string monthName = monthNames[month - 1];

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2 && leapYear) {
        days = 29;
    } else if (month == 2 && !leapYear) {
        days = 28;
    } else {
        days = 31;
    }

    if (newHour > 12) {
        newHour = hour - 12;
        meridiem = "PM";
    } else {
        meridiem = "AM";
    }


    if (minute <= 9) {
        newMinute = newMinute.insert(0, "0");
    }

    if (hour == 24) {
        newHour = 12;
    }

    std::cout << "\nThe current date in " << region << " is " << monthName << " " << dayOfMonth << ", " << year << "\n";
    std::cout << "The time is " << newHour << ":" << newMinute << " " << meridiem << " on a " << dayName;

    return 0;
}

bool checkLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}
