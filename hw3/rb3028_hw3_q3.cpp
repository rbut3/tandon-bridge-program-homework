/*HW 3, Q. 3
This program takes in three real number inputs from the user. The program then determines and outputs 
how many solutions a quadratic equation would have if you input the three real number inputs for a, b, c.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b, c;

    cout << "Please enter value of a, such that a is a real number: ";
    cin >> a;

    cout << "Please enter value of b, such that b is a real number: ";
    cin >> b;

    cout << "Please enter value of c, such that c is a real number: ";
    cin >> c; 

//A = 0 creates a linear equation, so there will either be infinite, one or zero solutions.
    if (a == 0) {
        cout << "A = 0 results in a linear equation bx + c = 0\n";

        if (b == 0 && c == 0)
            cout << "This equation has infinite solutions\n";

        else if (b == 0 && c != 0)
            cout << "This equation has no solutions\n";

        else 
            cout << "This equation has one solution: x = " << (-c)/b << endl;

        return 0;
    }

//One repeating real solution
    if ((b*b - 4*a*c) == 0)
        cout << "This equation has a single real solution x = " << (-b)/(2*a) << endl;   

//Two unique real solutions
    else if ((b*b - 4*a*c) > 0){
        cout << "This equation has two real solutions x = " << ((-b) + sqrt((b*b)-(4*a*c)))/(2*a) << " and " 
            << ((-b) - sqrt((b*b)-(4*a*c)))/(2*a) << endl;
    }

//No real solutions
    else if((b*b - 4*a*c) < 0){
        cout << "This equation has no real solutions\n";
    }
    
    return 0;

}