/*HW 4, Q. 2
Write a program that reads from the user a (decimal) number, and prints it’s representation in
the simplified Roman numerals system.*/

#include <iostream>
#include <string>
using namespace std;


int main() {

    int decimalNum, originalNum, countC, countX, countI;
    string romanString;
    char romanDigit;

    cout << "Tell me a positive integer: ";
    cin >> decimalNum;
    
    originalNum = decimalNum;

    while (decimalNum >= 1000) {
        decimalNum -= 1000;
        romanString += 'M';
        cout << romanString << endl;
    }

    if (decimalNum >= 500) {
        decimalNum -= 500;
        romanString += 'D';
        cout << romanString << endl;
    }

    for (countC = 1; decimalNum >= 100 && countC <= 4; countC++) {
        decimalNum -= 100;
        romanString += 'C';
        cout << romanString << endl;
    }

    if (decimalNum >= 50) {
        decimalNum -= 50;
        romanString += 'L';
        cout << romanString << endl;
    }

    for (countX = 1; decimalNum >= 10 && countX <=4; countX++) {
        decimalNum -= 10;
        romanString += 'X';
        cout << romanString << endl;
    }

    if (decimalNum >= 5) {
        decimalNum -= 5;
        romanString += 'V';
        cout << romanString << endl;
    }

    for (countI = 1; decimalNum >= 1 && countI <=4; countI++) {
        decimalNum -= 1;
        romanString += 'I';
        cout << romanString << endl;
    }
    
    cout << originalNum << " is equal to " << romanString << endl; 

    return 0;

}