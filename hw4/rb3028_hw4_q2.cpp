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

    cout << "Enter a decimal number: ";
    cin >> decimalNum;
    
    originalNum = decimalNum;

    while (decimalNum >= 1000) {
        decimalNum -= 1000;
        romanString += 'M';
    }

    if (decimalNum >= 500) {
        decimalNum -= 500;
        romanString += 'D';
    }

    for (countC = 1; decimalNum >= 100 && countC <= 4; countC++) {
        decimalNum -= 100;
        romanString += 'C';
    }

    if (decimalNum >= 50) {
        decimalNum -= 50;
        romanString += 'L';
    }

    for (countX = 1; decimalNum >= 10 && countX <=4; countX++) {
        decimalNum -= 10;
        romanString += 'X';
    }

    if (decimalNum >= 5) {
        decimalNum -= 5;
        romanString += 'V';
    }

    for (countI = 1; decimalNum >= 1 && countI <=4; countI++) {
        decimalNum -= 1;
        romanString += 'I';
    }
    
    cout << originalNum << " is " << romanString << endl; 

    return 0;

}