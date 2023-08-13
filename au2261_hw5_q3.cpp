#include <iostream>
using namespace std;

const int DAYS_IN_WEEK = 7;

int printMonthCalendar(int numOfDays, int startingDay) {
    int i, day, dayOfWeek;

    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;

    for (i = 1; i < startingDay; i++)
        cout << "\t"; 

    dayOfWeek = (startingDay - 1);
    
    for (day = 1; day <= numOfDays; day++) {
        dayOfWeek++;  
        if (dayOfWeek > 7) {
            dayOfWeek = 1;
            cout << endl;
        }
        cout << day << "\t";    
    }
    
    cout << endl << endl;
    dayOfWeek++;
    return dayOfWeek;
}

int isLeapYear(int Year) {
    bool isLeapYear;

    if (((Year % 4 == 0 ) && (Year % 100 != 0)) || (Year % 400 == 0))
        isLeapYear = true;
    else
        isLeapYear = false;
    return isLeapYear;
}

void printYearCalender(int year, int startingDay) {
    
    int numOfDays;
    bool LeapYear;

    LeapYear = isLeapYear(year);

    cout << "January " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 31, startingDay);
    cout << "February " << year << endl;
    if (LeapYear == 1)
        startingDay = printMonthCalendar(numOfDays = 29, startingDay);
    else
        startingDay = printMonthCalendar(numOfDays = 28, startingDay);
    cout << "March " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 31, startingDay);
    cout << "April " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 30, startingDay);
    cout << "May " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 31, startingDay);
    cout << "June " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 30, startingDay);
    cout << "July " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 31, startingDay);
    cout << "August " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 31, startingDay);
    cout << "September " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 30, startingDay);
    cout << "October " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 31, startingDay);
    cout << "November " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 30, startingDay);
    cout << "December " << year << endl;
    startingDay = printMonthCalendar(numOfDays = 31, startingDay);
}

int main() {
    int year, sDay;
    
    cout << "Enter year and starting day (1-7): ";
    cin >> year >> sDay;

    printYearCalender(year, sDay);

    return 0;
}