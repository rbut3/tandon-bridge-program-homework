/*HW 3, Q. 5
This program calculates and prints the user's BMI based on height and weight inputs. */

#include <iostream>
using namespace std;

int main() {

    double weightPounds, heightInches, weightKilos, heightMeters;

    cout << "Please enter weight (in pounds): ";
    cin >> weightPounds;

//Confirm weight is above zero.
    if (weightPounds <= 0){
        cout << "Invalid entry; try again\n";
        return 0;
    }
    
    cout << "Please enter height (in inches): ";
    cin >> heightInches;

//Confirm height is above zero.        
    if (heightInches <= 0){
        cout << "Invalid entry; try again\n";
        return 0;

    }

//Convert weight from pounds to kilos and height from inchest to meters.
    weightKilos = weightPounds * 0.453592;
    heightMeters = heightInches * 0.0254;

    cout << "The weight status is: ";

//Determine and print weight status.
    if (weightKilos/(heightMeters*heightMeters) < 18.5)
        cout << "Underweight\n";

    else if (weightKilos/(heightMeters*heightMeters) >= 18.5 && weightKilos/(heightMeters*heightMeters) < 25)
        cout << "Normal\n";

    else if (weightKilos/(heightMeters*heightMeters) >= 25 && weightKilos/(heightMeters*heightMeters) < 30)
        cout << "Overweight\n";
    
    else
        cout << "Obese\n";
    
    return 0;
}