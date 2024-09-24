/* HW 2, Q. 2:
This program asks the user to enter an amount of money in the format of dollars andremaining cents. 
The program calculates the minimum number of coins (quarters, dimes, nickels and pennies) that are 
equivalent to the input. Finally, the program outputs that calculation.*/ 

#include <iostream>

int main() {

    int cents, remainingCents, centQuarters, dollars, quarters, dimes, nickels, pennies;

    std::cout << "Please enter your amount in the format of dollars and cents separated by a space: ";
    std::cin >> dollars >> cents;
    std::cout << dollars << " " << cents << std::endl;

    quarters = dollars * 4;

    quarters = quarters + (cents / 25);
    centQuarters = cents / 25;

    remainingCents = cents - (centQuarters * 25);

    dimes = remainingCents / 10; 

    remainingCents = cents - ((centQuarters * 25)+(dimes * 10));

    nickels = remainingCents / 5;

    remainingCents = cents - ((centQuarters * 25)+(dimes * 10)+(nickels * 5));

    pennies = remainingCents;

    std::cout << dollars << " dollar(s) and " << cents << " cent(s) are:\n";
    std::cout << quarters << " quarter(s), " << dimes << " dime(s), " << nickels << " nickel(s), and " << pennies << " penny/pennies";

    return 0;

}


