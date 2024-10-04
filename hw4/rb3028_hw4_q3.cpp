/*HW 4, Q. 3
Write a program that reads from the user a positive integer (in a decimal representation), and
prints its binary (base 2) representation.*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int decimalNumber, inputNumber;

    cout << "Enter decimal number: ";
    cin >> inputNumber;

    decimalNumber = inputNumber;

    cout << "The binary representation of " << inputNumber << " is ";

    for (int counter = 31; counter >= 0; counter--) {
        int power = pow(double(2), double(counter));

        if (power > inputNumber){
            continue;
        } else if (decimalNumber >= power){
            cout << "1";
            decimalNumber -= power;
        } else {
            cout << "0";
        }
    
    }

    cout << endl;
    
    return 0;
}