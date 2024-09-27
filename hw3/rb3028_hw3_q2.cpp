/*HW 3, Q. 2
This program tells the user their college status (not started, graduated, 
year in school), based on user-provided grad and current years.*/

#include <iostream>
#include <string>

int main() {

    std::string name;
    int gradYear, currentYear;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Please enter your four-digit college graduation year: ";
    std::cin >> gradYear;

    std::cout << "Please enter the four-digit current year: ";
    std::cin >> currentYear;

//Checking for correct year format.
    if (gradYear < 1000 || currentYear < 1000){
        std::cout << "Invalid year format; try again.\n";
        return 0;
    }

//Calculates and prints college status based on user input grad year and current year.
    if (currentYear >= gradYear) 
        std::cout << name << ", you have Graduated!\n";
    else if (gradYear - currentYear == 1)
        std::cout << name << ", you are a Senior!\n";
    else if (gradYear - currentYear == 2)
        std::cout << name << ", you are a Junior!\n";
    else if (gradYear - currentYear == 3)
        std::cout << name << ", you are a Sophomore!\n";
    else if (gradYear - currentYear == 4)
        std::cout << name << ", you are a Freshman!\n";
    else
        std::cout << name << ", you haven't entered college!\n";
}

