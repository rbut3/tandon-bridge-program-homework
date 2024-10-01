/*HW 4, Q. 3
Write a program that reads from the user a positive integer (in a decimal representation), and
prints its binary (base 2) representation.*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int decimalNumber, originalNumber, binaryNumber = 0, remainder, counter = 2;

    cout << "Enter decimal number: ";
    cin >> decimalNumber;

    originalNumber = decimalNumber;

    for (counter = 0; decimalNumber > 0; counter++) {
        remainder = decimalNumber % 2;
        binaryNumber += (remainder * pow(double(10), double(counter)));
        decimalNumber /= 2;
    }

    cout << "The binary representation of " << originalNumber << " is " << binaryNumber << endl;

    return 0;
}