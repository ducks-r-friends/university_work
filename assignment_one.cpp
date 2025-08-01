// Grace Appleton
// 17094599

#include <iostream>
using namespace std;

int difference, day, month, year, final_day, final_month, final_year, days_in_month;

int main()
{
    cout << "Enter difference in days: ";
    cin >> difference;
    cout << "Enter date in the format day month year:";
    cin >> day >> month >> year;
    if (difference < 0)
    {
        month = (month - 1);
    }   

    if (month == 1)
    {
        days_in_month = 31;
    }
    else if (month == 2)
    {
        if ((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0))
        {
            days_in_month = 29;
        }
        else
        {
            days_in_month = 28;
        }
    }
    else if (month == 3)
    {
        days_in_month = 30;
    }
    else if (month == 4)
    {
        days_in_month = 30;
    }
    else if (month == 5)
    {
        days_in_month = 31;
    }
    else if (month == 6)
    {
        days_in_month = 30;
    }
    else if (month == 7)
    {
        days_in_month = 31;
    }
    else if (month == 8)
    {
        days_in_month = 31;
    }
    else if (month == 9)
    {
        days_in_month = 30;
    }
    else if (month == 10)
    {
        days_in_month = 31;
    }
    else if (month == 11)
    {
        days_in_month = 30;
    }
    else if (month == 12)
    {
        days_in_month = 31;
    }
    final_month = month; 

    if ((day + difference) > days_in_month)
    {
        final_day = ((day + difference) - days_in_month);
        final_month = month + 1;
        final_year = year;
    }
    if ((day + difference) < days_in_month)
        {
            final_year = year;
            final_day = (day + difference);
            final_month = month;     
    }
    if (final_month > 12)        
        {
            final_year = (year + 1);
            final_month = 1;
            final_day = day + difference;
        }

    cout << "the final date is: " << final_day << "/" << final_month << "/" << final_year << "\n"; 
}
