/*HW 4, Q. 1
Write two versions of a program that reads a positive integer n, and prints the first n even
numbers.*/

#include <iostream>
using namespace std;

int main() {

    int inputNum, counter = 1, evenNum = 0;

    cout << "Tell me a positive integer: ";
    cin >> inputNum;

    cout << endl << "First version of program: while loop.\n";

    while (counter <= inputNum) {
        evenNum += 2;
        cout << evenNum << endl; 
        counter++;
    }

    evenNum = 0;

    cout << endl << "Second version of program: for loop.\n";

    for (counter = 0; counter < inputNum; counter++) {
        evenNum += 2;
        cout << evenNum << endl;
    }

    return 0;

}