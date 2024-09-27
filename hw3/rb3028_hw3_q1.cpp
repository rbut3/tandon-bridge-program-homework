/*HW 3, Q. 1
The below program takes in two inputs from the user: an item they aim to purchase 
and a second item they aim to purchase. The program then applies various discounts
and tax, after which it displays the various prices to the user.*/

#include <iostream>

int main() {

    double item1, item2, taxRate, basePrice, discountPrice, totalPrice;
    char memberChar;  

    std::cout << "Enter price of first item (format ex. 10, 11.25, 254.09): ";
    std::cin >> item1;

    std::cout << "Enter price of second item (format ex. 10, 11.25, 254.09): ";
    std::cin >> item2;

    basePrice = item1 + item2; 

/*There is a buy one item, get the second item half off discount. The below assesses
which is the less expensive item, applies the 50% discount, and then finds an initial
price of the two items.*/
    if (item1 > item2)
        item2 *= .50;
    else 
        item1 *= .50;
    
    discountPrice = item1 + item2;

    std::cout << "Do you have a club card (Y/N): ";
    std::cin >> memberChar;

//Applies member discount if user answered yes (either Y or y).
    if (memberChar != 'Y' && memberChar != 'y' && memberChar != 'N' && memberChar != 'n'){
        std::cout << "Invalid input; try again.\n";
        return 0;
    }
    
    if (memberChar == 'Y' || memberChar == 'y') 
        discountPrice *= .90;

    std::cout << "Enter tax rate (format ex.: 0 for no tax, 8.25 for 8.25%, etc.): ";
    std::cin >> taxRate;

//Verifies tax rate is non-negative and, if so, calculates the tax rate multiple needed to calculate the total price for the user.
    if (taxRate < 0){ 
        std::cout << "Invalid input; try again.\n";
        return 0;
    }
    
    taxRate = (taxRate / 100)+1;

//Displays to the user the base price, discounted price, and total price after tax.
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << "Base price: $" << basePrice << std::endl;

    std::cout << "Price after discounts: $" << discountPrice << std::endl;

    std::cout << "Total price: $" << discountPrice*taxRate << std::endl;

    return 0;
}