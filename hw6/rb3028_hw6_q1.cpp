/*HW 6, Q.1
Can go up to the 46th fibonacci number*/

#include <iostream>
using namespace std; 

int fibNum(int userInput);


int main() {
    int userInput;

    cout << "Tell me a positive integer: ";
    cin >> userInput;

    cout << fibNum(userInput) << endl;

    return 0; 
}

int fibNum(int userInput) {
    int num1 = 1, num2 = 1, fibNum = 1; 

    if(userInput == 1 || userInput == 2)
        return 1;

    for(int i = 3; i <= userInput; i++){
        fibNum = num1 + num2;
        num1 = num2;
        num2 = fibNum; 
    }
    
    return fibNum;
}


