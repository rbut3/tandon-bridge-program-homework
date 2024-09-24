/*Homework 2, Q. 3. This program takes inputs outlining how much John and Bill have worked and outputs the total amount of time worked.*/
#include <iostream>

int main() {

    int totalWeeksWorked = 0, totalDaysWorked, totalHoursWorked, totalMinutesWorked; 
    int johnDaysWorked, johnHoursWorked, johnMinutesWorked;
    int billDaysWorked, billHoursWorked, billMinutesWorked;

    std::cout << "Please enter the number of days John has worked: ";
    std::cin >> johnDaysWorked;

    std::cout << "Please enter the number of hours John has worked: ";
    std::cin >> johnHoursWorked;

    std::cout << "Please enter the number of minutes John has worked: ";
    std::cin >> johnMinutesWorked;

    std::cout << "Please enter the number of days Bill has worked: ";
    std::cin >> billDaysWorked;

    std::cout << "Please enter the number of hours Bill has worked: ";
    std::cin >> billHoursWorked;

    std::cout << "Please enter the number of minutes Bill has worked: ";
    std::cin >> billMinutesWorked;

    totalDaysWorked = johnDaysWorked + billDaysWorked;

    totalHoursWorked = johnHoursWorked + billHoursWorked;
    if (totalHoursWorked >= 24) {

        totalDaysWorked = totalDaysWorked + (totalHoursWorked / 24);
        totalHoursWorked = totalHoursWorked % 24;

    }

        totalMinutesWorked = johnMinutesWorked + billMinutesWorked;
    if (totalMinutesWorked >= 60) {

        totalHoursWorked = totalHoursWorked + (totalMinutesWorked / 60);
        totalMinutesWorked = totalMinutesWorked % 60;

    }

    std::cout << "The total time both of them worked together is: " << totalDaysWorked << " days, " << totalHoursWorked << " hours and " << totalMinutesWorked << " minutes.\n";

    return 0;

}