/*HW 6, Q.1
This is a two-part assignment.
    1. Write a function int fib(int n) that returns the n-th 
        element of the Fibonacci sequence.
    2. Write a program that prompts the user to enter a positive
        integer, num, and then prints the nums element in the 
        Fibonacci sequence.*/

#include <iostream>
using namespace std; 

int fib(int n);
/*Input: user input in the form of a positive integer
Output: n-th element of the Fibonacci sequence
Assumptions: Given that the type is int, this will only capture
through Fibonacci number 46. */

int main() {
    int userInput;

    cout << "Please enter a positive integer: ";
    cin >> userInput;

    cout << fib(userInput) << endl;

    return 0; 
}

int fib(int n) {
    int num1 = 1, num2 = 1, fibNum; 

    if(n == 1 || n == 2)
        return 1;

    for(int i = 3; i <= n; i++){
        fibNum = num1 + num2;
        num1 = num2;
        num2 = fibNum; 
    }
    
    return fibNum;
}


