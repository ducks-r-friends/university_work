// At a diving competition, the mark given to each diver is awarded as follows. There are a number of
// judges and each judge gives a mark. The final mark is found by leaving out the highest and lowest marks
// and calculating the average of the rest of the marks. Write a C++ program that reads in the number of
// judges at the competition and then reads in a mark for each judge. Perform the necessary calculations,
// and display the final mark.

// The following data checks must be carried out in the program:
// • the number of judges must be from 4 to 8 inclusive
// • each judge must give a mark between 0.0 and 10.0 inclusive (a real number that may include
// decimal fractions)

#include <iostream>
#include <random>

using namespace std;

main (){
int score, judge, number_of_judges, number_judged, judges_mark;

cout << "Enter number of judges: ";
cin >> number_of_judges;
number_judged = 0;

    while (number_of_judges < 4 || number_of_judges > 8) {
        cout << "Invalid. Enter number of judges again (4 to 8): ";
        cin >> number_of_judges;
    }
    
    while (number_of_judges > number_judged)
        {   number_judged = number_judged + 1;
            cout << "Enter a mark for Judge: "<< number_judged;
            cin >> judges_mark;
                if (judges_mark < 0 || judges_mark > 10) {
                    cout << "Invalid. Enter mark again (0.0 to 10.0): ";
                    cin >> judges_mark;
                } else {
                    continue;
                }                
        }


}
