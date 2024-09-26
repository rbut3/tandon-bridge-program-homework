/*HW 3, Q. 2
This program tells the user their college status (not started, graduated, 
year in school), based on user-provided grad and current years.*/

#include <iostream>
#include <string>

// Andreas comments
// 1. Like the other program I would simply exit if the year format is incorrect. Then you can remove else and indent back.
// 2. Line 31, you can use >= instead of checking both > and ==
// 3. Maybe write 'you have Graduated' instead since they use that term explicitly

int main() {

    std::string name;
    int gradYear, currentYear;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Please enter your four-digit college graduation year: ";
    std::cin >> gradYear;

    std::cout << "Please enter the four-digit current year: ";
    std::cin >> currentYear;

//Checking for correct year format. Simple version.
    if (gradYear < 1000 || currentYear < 1000)
        std::cout << "Invalid year format; try again.\n";
    else {

//Calculates and prints college status based on user input grad year and current year.
        if (currentYear > gradYear || currentYear == gradYear) 
            std::cout << name << ", you have already graduated!\n";
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
}
