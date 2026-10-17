#include <iostream>
using namespace std;

int main() {

    int month, year, numberOfDays;
    int leapYear = 29;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        numberOfDays = 30;
    }

    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
        month == 10 || month == 12)
    {
        numberOfDays = 31;
    }

    else if (month == 2)
    {
        if (year % 4 == 0 && year % 100 != 0) {
            numberOfDays = leapYear;
        }

        else if (year % 400 == 0) {
            numberOfDays = leapYear;
        }

        else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0) {
            numberOfDays = 28;
        }

        else if (year % 4 != 0) {
            numberOfDays = 28;
        }
    }

    else if (month < 1 || month > 12)
    {
       cout << "Invalid month entry." << endl;
        return 0;
    }

    cout << "There are " << numberOfDays << " days in the month. " << endl;

    return 0;
}