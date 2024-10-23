/*HW 6, Q. 2
Write a program	that, prints a ‘pine tree’ consisting of triangles of increasing sizes, filled	
with a character. */

#include <iostream>
using namespace std;

void printShiftedTriangle(int triangles, int gap, char symbol);
void printPineTree(int triangles, char symbol);

const char SPACE = ' ';

int main(){
    int triangles, sizeGap;
    char fillSymbol;

    cout << "Tell me an two positive integers and a symbol, all separated by a space: ";
    cin >> triangles >> sizeGap >> fillSymbol;

    printShiftedTriangle(triangles, sizeGap, fillSymbol);
    printPineTree(triangles, fillSymbol);

    return 0;
}

void printShiftedTriangle(int triangles, int gap, char symbol){
    int numSymbols = 1; 

    for(int i = 0; i < triangles; i++) {
        for(int j = 0; j < gap; j++){
            cout << SPACE;
        }

        for(int k = 0; k < ((2*triangles)/2)-(i+1); k++){
            cout << SPACE;
        }

        for(int l = 0; l < numSymbols; l++){
            cout << symbol;
        }

        numSymbols += 2;
        cout << endl;

    }

}

void printPineTree(int triangles, char symbol){


}