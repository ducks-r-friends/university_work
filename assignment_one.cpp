
// Grace Appleton
// 17094599

#include <iostream>
using namespace std;

int difference, day, month, year, final_day, final_month, final_year, days_in_month, days_left_in_month;

int get_days_in_month(){
    if (month == 2){
        if ((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0))
            days_in_month = 29;
        else
            days_in_month = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days_in_month = 30;
    else 
        days_in_month = 31;

    return days_in_month;
}

int main(){
    cout << "Enter difference in days: ";
    cin >> difference;
    cout << "Enter date in the format day month year: ";
    cin >> day >> month >> year;

    bool is_negative = false;
    if (difference < 0) {
        is_negative = true;
        difference = -difference; 
    }

    final_month = month; 
    final_year = year;
    final_day = day;

    days_in_month = get_days_in_month();
    days_left_in_month = (days_in_month - day);

    if (is_negative != true) {
        if ((day + difference) > days_in_month) {
            final_month = month + 1;
            final_year = year;
            if (final_month > 12) {
                final_month = 1;
                final_year = year + 1;
            }

            month = final_month;
            year = final_year;
            days_in_month = get_days_in_month();

            final_day = (day + difference) - days_in_month;
        } else {
            final_day = day + difference;
            final_month = month;
            final_year = year;
        }
    } 
    else {
        if ((day - difference) < 1) {
            final_month = month - 1;
            if (final_month < 1) {
                final_month = 12;
                final_year = year - 1;
            }
            month = final_month; 
            year = final_year;   
            days_in_month = get_days_in_month();
            final_day = days_in_month + (day - difference); 
        } else {
            final_day = day - difference;
            final_month = month;
            final_year = year;
        }
    }

    cout << "The final date is: " << final_day << "/" << final_month << "/" << final_year << "\n";
}
