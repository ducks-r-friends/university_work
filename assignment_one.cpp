// Grace Appleton
//  17094599

#include <iostream>
using namespace std;
    int difference, day, month, year, final_day, final_month, final_year, days_in_month, days_left_in_month; 
    
    int get_days_in_month(){

    if (month == 2){
        if ((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0))
        {
            days_in_month = 29;
        }
        else
        {
            days_in_month = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days_in_month = 30;
    }
    else 
    {
        days_in_month = 31;
    }
    }

    int main(){
   
    cout << "Enter difference in days: ";
    cin >> difference;
    cout << "Enter date in the format day month year:";
    cin >> day >> month >> year;
    final_month = month; 
    days_left_in_month = (days_in_month - day);

    if (difference > 0) {
        final_day = 
    }

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
