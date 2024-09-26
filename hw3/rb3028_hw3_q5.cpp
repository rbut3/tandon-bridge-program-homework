/*HW 3, Q. 5
1. Take weight input from user (pounds)
2. Take height input from user (inches)
3. Convert weight to kilos
4. Convert height to meters
5. Calculate weight/height^2
5. Print weight status

*/

#include <iostream>
using namespace std;

int main() {

    double weightPounds, heightInches, weightKilos, heightMeters;

    cout << "Please enter weight (in pounds): ";
    cin >> weightPounds;

    if (weightPounds <= 0){
        cout << "Invalid entry; try again\n";
        return 0;

    } else {

        cout << "Please enter height (in inches): ";
        cin >> heightInches;
        
        if (heightInches <= 0){
            cout << "Invalid entry; try again\n";
            return 0;

        } else {

            weightKilos = weightPounds * 0.453592;
            heightMeters = heightInches * 0.0254;

            cout << "The weight status is: ";

            if (weightKilos/(heightMeters*heightMeters) < 18.5)
                cout << "Underweight\n";

            else if (weightKilos/(heightMeters*heightMeters) >= 18.5 && weightKilos/(heightMeters*heightMeters) < 25)
                cout << "Normal\n";

            else if (weightKilos/(heightMeters*heightMeters) >= 25 && weightKilos/(heightMeters*heightMeters) < 30)
                cout << "Overweight\n";
            
            else
                cout << "Obese\n";
        }
    }
    return 0; 

}