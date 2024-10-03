/*HW 4, Q. 6
Write a program that asks the user to input a positive integer n, and print all of the numbers
from 1 to n that have more even digits than odd digits.

While loop to run through digits
Modulo 2 digits
Add 1 to a variable "evenDigit"
Add 1 to a variable "oddDigit"*/

#include <iostream>

using namespace std;

int main() {
    int input;

    cout << "Tell me a positive integer: ";
    cin >> input;

    for (int counter = 1; counter <= input; counter++) {
        int evenDigit = 0, oddDigit = 0;
        int remaining = counter; 

        while(remaining > 0) {
            int x = remaining % 10;
            
            if (x % 2 == 0){
                evenDigit += 1;
            } else {
                oddDigit += 1;
            }

            remaining /= 10;
        }
        
        if (oddDigit < evenDigit) {
            cout << counter << endl;
        }
    }

    return 0;
}

