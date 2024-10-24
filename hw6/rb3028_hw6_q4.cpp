/*HW 6, Q.4
This is a two-part question. 
    1. Implement a function: void printDivisors(int num). 
    2. Use the function above when implementing a program that reads from the user a positive
        integer (≥2), and prints all it’s divisors.*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void printDivisors(int num);
/*Input: positive integer >=2 
Output: all divisors of user input
Assumptions: all positive integers have divisors*/

int main(){
    int userInput;

    cout << "Enter a positive integer >= 2: ";
    cin >> userInput;

    printDivisors(userInput);

    return 0;
}

void printDivisors(int num){
    string highDivisors;
    
    for(int i = 1; i <= sqrt(num); i++){
        if (num%i == 0) {
            cout << i << " "; 

            if((num/i) == i)
                continue;
            else
                highDivisors = to_string(num/i) + " " + highDivisors;
        } 
    }

    cout << highDivisors;


}