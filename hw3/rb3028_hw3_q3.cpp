/*HW 3, Q. 3

1. Get three real number inputs a, b, and c 
2. Plug them into the equation: ax^2 + bx + c = 0
3. Classify the equation:
    ** If a = 0, the equation is not valid
    a. infinite solutions
    b. no solution 
    c. no real solution b^2 - 4ac < 0 
    d. one real solution b^2 - 4ac = 0
    e. two real solutions b^2 - 4ac > 0 
4. If d or e, print those solutions

*/

#include <iostream>
#include <cmath>

int main() {

    double a, b, c, solution1, solution2, sqrtResult;

    std::cout << "Please enter value of a, such that a is a real number and not = 0: ";
    std::cin >> a;
     if (a == 0)
        std::cout << "a cannot = 0; please try again.\n";

    else if (a != 0) {
        std::cout << "Please enter value of b, such that b is a real number: ";
        std::cin >> b;

        std::cout << "Please enter value of c, such that c is a real number: ";
        std::cin >> c; 

    

//One repeating real solution
        if ((b*b - 4*a*c) == 0){
        std::cout << "This equation has a single real solution x = " << (-b)/(2*a) << std::endl;
        }

    //Two unique real solutions
        else if ((b*b - 4*a*c) > 0){
            solution1 = ((-b) + sqrt((b*b)-4*a*c))/2*a;
            solution2 = ((-b) - sqrt((b*b)-4*a*c))/2*a;
            std::cout << "This equation has two real solutions x = " << solution1 << " and " << solution2 << std::endl;
        }

    //No real solutions
        else if((b*b - 4*a*c) < 0){
            std::cout << "This equation has no real solution\n";
        }
        }
    return 0;

}