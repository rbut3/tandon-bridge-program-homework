/*HW 3, Q. 1
The below program takes in two inputs from the user: an item they aim to purchase 
and a second item they aim to purchase. The program then applies various discounts
and tax, after which it displays the various prices to the user.*/

#include <iostream>

// Andreas comments:
// 1. Exit program after noticing invalid input, when you do that you can also remove the else-clauses
// 2. I don't think >100% is an actual invalid sales tax
// 3. You can use characters for comparison 'y', 'n' etc rather than ints
// 3. Assignments of discountPrince on l32 and 35 can be moved below if/else since they always run
// 4. L44 - use =*
// 5. L46, this doesn't make sense to me, why would you assign something to itself. Better just remove the else if and check for error condition and exit
// 6. If you keep the floating point precision I don't think you need to redo it multiple time

int main() {

    double item1, item2, taxRate, basePrice, discountPrice, totalPrice;
    int memberInt;
    char memberChar;  

    std::cout << "Enter price of first item (format ex. 10, 11.25, 254.09): ";
    std::cin >> item1;

    std::cout << "Enter price of second item (format ex. 10, 11.25, 254.09): ";
    std::cin >> item2;

    basePrice = item1 + item2; 

/*There is a buy one item, get the second item half off discount. The below assesses
which is the less expensive item, applies the 50% discount, and then finds an initial
price of the two items.*/
    if (item1 > item2){
        item2 = item2*.50;
        discountPrice = item2 + item1; 
    } else {
        item1 = item1*.50;
        discountPrice = item1 + item2;
    }

    std::cout << "Do you have a club card (Y/N): ";
    std::cin >> memberChar;
    memberInt = int(memberChar);

//Applies member discount if user answered yes (either Y or y).
    if (memberInt == 89 || memberInt == 121) 
        discountPrice = discountPrice*.90;
    else if (memberInt == 78 || memberInt == 110)
        discountPrice = discountPrice;
    else 
        std::cout << "Invalid input; try again.";

    std::cout << "Enter tax rate (format ex.: 0 for no tax, 8.25 for 8.25%, etc.): ";
    std::cin >> taxRate;

//Applies user-provided tax rate.
    if (taxRate < 0 || taxRate > 100) 
        std::cout << "Invalid input; try again.\n";
    else
        taxRate = (taxRate / 100)+1;
    
//RB NOTE: Decimal precision wasn't required, so I might take it out.
//Displays to the user the base price, discounted price, and total price after tax.
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << "Base price: $" << basePrice << std::endl;

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << "Price after discounts: $" << discountPrice << std::endl;

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << "Total price: $" << discountPrice*taxRate << std::endl;

    return 0;
}