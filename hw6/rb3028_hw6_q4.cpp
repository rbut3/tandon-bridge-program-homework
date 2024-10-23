/*HW 6, Q.4
This is a two-part question. 
    1. Implement a function: void printDivisors(int num). 
    2. Use the function above when implementing a program that reads from the user a positive
        integer (≥2), and prints all it’s divisors.*/

#include <iostream>
using namespace std;

void printDivisors(int num);

int main(){
    int userInput;

    cout << "Enter a positive integer: ";
    cin >> userInput;

    printDivisors(userInput);

    return 0;
}

void printDivisors(int num){
    #include <cmath>
    #include <string>

    string highDivisors;
    
    for(int i = 1; i <= sqrt(num); i++){
        if (num%i == 0) {
            cout << i << " "; 

            int complement = num/i;
            if(complement == i)
                continue;
            else
                highDivisors = to_string(complement) + " " + highDivisors;
        } 
    }

    cout << highDivisors;


}