/*HW 3, Q. 6
This program computes the cost of a long-distance call based on when the call took place and how long it was.*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string weekDay;
    int timeHours, timeMinutes, callLength;

    cout << "Tell me what day your call was (Mo, Tu, We, Th, Fr, Sa, or Su): ";
    cin >> weekDay; 

    cout << "Tell me how long your call was (integer minutes, please): ";
    cin >> callLength;

 //Confirm call length is 0 or higher; negative call time is illogical.       
    if (callLength < 0) {
        cout << "Invalid input.\n";
        return 0;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
        
    if (weekDay == "Sa" || weekDay == "Su") {
        
        cout << "The cost of the call is $" << (callLength*0.15) << endl;

    } else if (weekDay == "Mo" || weekDay == "Tu" || weekDay == "We" || weekDay == "Th" || weekDay == "Fr") {
        cout << "When did your call start (24-hour format, e.g., 00:54, 17:02, etc.)? ";
        cin >> timeHours >> timeMinutes;

//Differentiate outputs based on start time of call, given different costs.
        if (timeHours < 8 || timeHours > 18) {
            cout << "The cost of the call is $" << (callLength*0.25) << endl;
        
        } else {
            cout << "The cost of the call is $" << (callLength*0.40) << endl;
        
        }

    } else {
        cout << "Invalid input.\n";
    }

    return 0;  
}