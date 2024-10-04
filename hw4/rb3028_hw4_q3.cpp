/*HW 4, Q. 3
Write a program that reads from the user a positive integer (in a decimal representation), and
prints its binary (base 2) representation.*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int decimalNumber, originalNumber, binaryDigit = 0, remainder, counter = 2;

    cout << "Enter decimal number: ";
    cin >> decimalNumber;

    originalNumber = decimalNumber;

    cout << "The binary representation of " << decimalNumber << " is ";

    for (counter = 31; originalNumber > 0; counter--) {
        int power = pow(double(2), double(counter));

        if (power > decimalNumber){
            continue;
        } else if (originalNumber >= power){
            cout << "1";
            originalNumber -= power;
        } else {
            cout << "0";
            originalNumber = originalNumber;
        }
    
    }

    if (originalNumber == 0)
        cout << "0\n";
    else 
        cout << "1\n";

    return 0;
}