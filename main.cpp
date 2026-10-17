#include <iostream>
using namespace std;

int main() {

    int month, year, numberOfDays;
    int leapYear = 29;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    if (month == 4, 6, 9, 11)
    {
        numberOfDays = 30;
    }

    else if (month == 1, 3, 5, 7, 8, 10, 12)
    {
        numberOfDays = 31;
    }

    cout << numberOfDays << endl;



    return 0;
}