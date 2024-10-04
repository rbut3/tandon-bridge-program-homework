/*HW 4, Q. 6
Write a program that asks the user to input a positive integer n, and print all of the numbers
from 1 to n that have more even digits than odd digits.*/

#include <iostream>
using namespace std;

int main() {
    int input;

    cout << "Tell me a positive integer: ";
    cin >> input;

    for (int counter = 0; counter <= input; counter++) {
        int evenDigit = 0, oddDigit = 0;
        int remaining = counter; 

//The below isolates each digit and checks if its even or odd; +1 to the count of even or odd depending.
        while(remaining > 0) {
            if ((remaining%10) % 2 == 0){
                evenDigit += 1;
            } else {
                oddDigit += 1;
            }
            remaining /= 10;
        }

//oddDigit and evenDigit are the counts of how many odd and even digits are in the number, so this says if there are fewer odd digits than even, print that number.        
        if (oddDigit < evenDigit) 
            cout << counter << endl;
    }

    return 0;
}

