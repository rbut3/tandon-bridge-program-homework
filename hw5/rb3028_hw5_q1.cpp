/*HW 5, Q1

Write a program that reads a positive integer n from the user and prints out a nxn
multiplication table. The columns should be spaced by a tab.*/

#include <iostream>
using namespace std;

int main(){
    int userInput; 

    cout << "Enter an integer: ";
    cin >> userInput;

    for (int a = 0; a < userInput; a++) {
        for (int b = 0; b < userInput; b++) {
            if (b == a)
                cout << (a+1)*(a+1) << "\t";
            else 
                cout << (a*b)+(a+b)+1 << "\t";
        }
       cout << endl;
    }
    return 0;
}