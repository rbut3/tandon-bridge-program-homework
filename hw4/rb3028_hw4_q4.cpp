/*HW 4, Q. 4
Write two versions of a program that reads a sequence of positive integers from the user,
calculates their geometric mean, and prints the geometric mean.*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int userInput, seqLength, originalLength, productOfInputs = 1;
    double geomMean;

    cout << "First version of program.\n";
    cout << "Please enter the length of your sequence: ";
    cin >> seqLength;

    originalLength = seqLength;

    cout << "Please enter your sequence of positive integers: ";

    while (seqLength > 0){
        cin >> userInput;
        productOfInputs *= userInput;
        seqLength--;
    }

    geomMean = pow(double(productOfInputs), (1.0/originalLength));
    cout << "The geometric mean is: " << geomMean << endl;

//Beginning of second version of the program. 
    userInput = 1;
    productOfInputs = 1;
    
    cout << endl; 
    cout << "Second version of program.\n";
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: ";
    
    do {
        cin >> userInput;
        if (userInput == -1)
            break;
        else
            productOfInputs *= userInput;
    } while (userInput != -1);

    geomMean = pow(double(productOfInputs), double(1.0/originalLength));
    cout << "The geometric mean is: " << geomMean << endl;
    
    return 0;

}