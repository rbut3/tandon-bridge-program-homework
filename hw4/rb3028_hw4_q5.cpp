/*HW 4, Q. 5
Write a program that asks the user to input a positive integer n, and prints a textual image of an
hourglass made of 2n lines with asterisks.*/

#include<iostream>
using namespace std;

int main() {

    int inputInteger;

    cout << "Tell me a positive integer: ";
    cin >> inputInteger;

    for (int row = 0; row < (2*inputInteger); row++) {
        int r = row;
        if (row >= inputInteger) 
            r = (2*inputInteger - row) - 1;

/*Logic below for printing either a space or an asterisk. The below enters spaces when row 
is bigger than the column value and also when column is bigger than 2 times the input 
minus 1, minus the row value.*/

        for (int column = 0; column < ((2*inputInteger) - 1); column++) {  
            if (column >= (2*inputInteger - 1) - r)
                cout << " ";
            else if (r > column)
                cout << " ";
            else
                cout << "*";
            
        }
        cout << endl;
    }
    return 0;
}