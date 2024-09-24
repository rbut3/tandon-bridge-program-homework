/* HW 2, Q. 1:
Below is a program that asks the user to enter a number of 
quarters, dimes, nickels and pennies and then outputs the monetary value of
the coins in the format of dollars and remaining cents.*/

#include <iostream>

int main() 
{

    int quarters, dimes, nickels, pennies, dollars;
    double valQuarters, valDimes, valNickels, valPennies, totalMoney, cents;

    std::cout << "Please enter number of coins:\n";

//Read amount from user and calculate dollare value.
    std::cout << "# of quarters: ";
    std::cin >> quarters;
    valQuarters = .25 * quarters;

    std::cout << "# of dimes: ";
    std::cin >> dimes;
    valDimes = .10 * dimes;

    std::cout << "# of nickels: ";
    std::cin >> nickels;
    valNickels = .05 * nickels;

    std::cout << "# of pennies: ";
    std::cin >> pennies;
    valPennies = .01 * pennies;

//Calculates total dollar amount input by user.
    totalMoney = valQuarters + valDimes + valNickels + valPennies;
    dollars = int(totalMoney);
    cents = (totalMoney - dollars) * 100;

//Output total dollar amount to user. Different output if dollar or dollars output needed.
    if (dollars == 1) {
        std::cout << "The total is " << dollars << " dollar and " << cents << " cents\n";
    } else {
        std::cout << "The total is " << dollars << " dollars and " << cents << " cents\n";
    }

return 0;

}