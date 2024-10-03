/*HW 4, Q. 5
Write a program that asks the user to input a positive integer n, and prints a textual image of an
hourglass made of 2n lines with asterisks.

Algorithm:
1. Take in an integer input
2. String " " counter-value times, "*"" n+(n-1)-counter times, " " counter-value times;
    **Counter that starts at zero; while loop that prints " " until hitting counter #, incrememnts up by 1 each line
3. Print " " 1x; print * n+(n-1)-2 times; print " " 1x
    **Counter at 1 for this round
4. Print " " 2x; print * n+(n-1)-4 times; print " " 2x
*/

#include<iostream>
#include<cmath>
#include<unistd.h>

using namespace std;

int main() {

    int inputInteger, iterations = 1;

    cout << "Tell me a positive integer: ";
    cin >> inputInteger;

    for (int row = 0; row < inputInteger; row++) {
        usleep(100000);
        for (int beginSpace = 0; beginSpace < row; beginSpace++){
            cout << " ";
        }
    
        for (int column = 0; column < (((2*inputInteger)-1) - (2*row)); column++) {
            cout << "*";
        }
        cout << endl;

    }
    
    for (int row = 0; row < inputInteger; row++) {
        usleep(100000);
        for (int beginSpace = 0; beginSpace < ((((2*inputInteger)-1) - (2*row))/2); beginSpace++){
            cout << " ";
        }
    
        for (int column = ((row * 2) + 1); column > 0 ; column--) {
            cout << "*";
        }
        cout << endl;

    }
    return 0;
}