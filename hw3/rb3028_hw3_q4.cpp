/*HW 3, Q. 4
This program takes in a real number input from the user and outputs the number rounded based on user 
preferred rounding method.*/

#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main() {

    double realNumber, decimalPart;
    int inputInt, roundingChoice;

    cout << "Please enter a real number: \n";
    cin >> realNumber;
    inputInt = int(realNumber);

    cout << "Choose your rounding method:\n";
    cout << "1. Floor round\n" << "2. Ceiling round\n" << "3. Round to the nearest whole number\n";
    cin >> roundingChoice;

    if (realNumber == 0) {
        cout << realNumber << endl;
        return 0;
    }

    switch (roundingChoice)
    {
    case FLOOR_ROUND:
        if (realNumber > 0) 
            cout << inputInt << endl;
         else 
            cout << inputInt - 1 << endl;
         
        break;

    case CEILING_ROUND:
        if (realNumber < 0)
            cout << inputInt << endl;
        else 
            cout << inputInt + 1 << endl;

        break;

    case ROUND:
//Captures if user selects 3/ROUND
        if (realNumber < 0) {
            decimalPart = (realNumber - inputInt) * -1;

            if (decimalPart < 0.5) 
                cout << inputInt << endl;
            else 
                cout << inputInt - 1 << endl;

        } else {
            decimalPart = realNumber - inputInt;
            
            if (decimalPart < 0.5)
                cout << inputInt << endl;
            else 
                cout << inputInt + 1 << endl;
            
        }
        break;
    
    default:
        cout << "Invalid input; try again\n";
        break;
    }

    return 0;

}