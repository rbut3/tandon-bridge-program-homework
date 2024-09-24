/* HW 2, Q. 4:
This program reads from the user two positive integers. It then prints the result of addition, 
subtraction, multiplication, division, div, and mod.*/

#include <iostream>
#include <string>

int main() {

    int intOne = 0, intTwo = 0;

    std::cout << "Please enter two positive integers, separated by a space: ";
    std::cin >> intOne >> intTwo;

    if (intOne > 0 && intTwo > 0) {
        std::string strOne = std::to_string(intOne);
        std::string strTwo = std::to_string(intTwo);

        std::cout << strOne << " + " << strTwo << " = " << intOne + intTwo << std::endl;
        std::cout << strOne << " - " << strTwo << " = " << intOne - intTwo << std::endl;
        std::cout << strOne << " * " << strTwo << " = " << intOne * intTwo << std::endl;
        std::cout << strOne << " / " << strTwo << " = " << double(intOne) / double(intTwo) << std::endl;
        std::cout << strOne << " div " << strTwo << " = " << intOne / intTwo << std::endl;
        std::cout << strOne << " mod " << strTwo << " = " << intOne % intTwo << std::endl;
    }  else {
        std::cout << "Try again with two positive integers.";
    };

    return 0;
}