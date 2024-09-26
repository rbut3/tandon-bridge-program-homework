/*HW 3, Q. 3

RB FIGURE OUT HOW TO CHECK IF REAL NUMBER INPUT*/

#include <iostream>

using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main() {

    double input;
    int roundingChoice;

    cout << "Please enter a real number: \n";
    cin >> input; 

    cout << "Choose your rounding method:\n";
    cout << "1. Floor round\n" << "2. Ceiling round\n" << "3. Round to the nearest whole number\n";
    cin >> roundingChoice;

    if (roundingChoice != 1 && roundingChoice != 2 && roundingChoice != 3) 
        cout << "Invalid input; try again\n";
    else {
    switch (roundingChoice)
    {
    case FLOOR_ROUND:
        cout << floor(input) << endl;
        break;
    case CEILING_ROUND:
        cout << ceil(input) << endl;
        break;

    default:
        cout << round(input) << endl;
        break;
    }  
    }
    
    return 0;

}