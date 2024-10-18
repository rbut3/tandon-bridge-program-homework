/*HW5, Q2

Implement a	number	guessing game. The program should randomly choose an integer between 1 and 100 (inclusive),
and	have the user try to guess that number.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randomNumber, userInput, lowerLimit = 1, upperLimit = 100;

    srand(time(0));
    randomNumber = (rand() % 100) + 1;

    cout << "I thought of a number between 1 and 100! Try to guess it!" << endl;

    for (int a = 0; a < 5; a++) {
        
        cout << "Range: [" << lowerLimit << ", " << upperLimit << "], Number of guesses left: " << 5-a << endl;
        cout << "Your guess: ";
        cin >> userInput;

        if (a !=4 && (userInput < lowerLimit || userInput > upperLimit)) {
            cout << "Number outside of range." << endl;
            continue;
        }
        
        if (userInput == randomNumber) {
            cout << "Congrats! You guessed my number in " << a+1 << " guess(es)." << endl;
            break;
        }

        if (a == 4) {
            cout << "Out of guesses! My number is " << randomNumber << "." << endl;
            break;
        } else if (userInput < randomNumber) {
            cout << "Wrong! My number is bigger." << endl;
            lowerLimit = userInput+1;
        } else if (userInput > randomNumber) {
            cout << "Wrong! My number is smaller." << endl;
            upperLimit = userInput-1;
        } 
    }
    return 0;
}