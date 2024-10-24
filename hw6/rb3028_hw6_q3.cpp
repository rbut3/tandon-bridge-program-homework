/*HW 6, Q.3
Implement the function double eApprox(int n). This function is given a positive integer n,
and returns an approximation of e, calculated by the sum of the first (n+1) addends of 
the infinite sum above.*/

#include <iostream>
using namespace std;

double eApprox(int n);
/*Input: int n, which is provided in main and scales in the for loop
Output: approximation of e, calculated by the sum of the first n+1 addends
Assumptions: e can be approximated by calculating a partial sum of the infinite sum*/

//This main function was provided in the homework instructions.
int main() {
    cout.precision(30);

    for (int n = 1; n <= 15; n++) {
        cout << "n = " << n << '\t' <<eApprox(n) << endl; 
    }
    
    return 0;
}

double eApprox(int n) {
    double e = 1, factorial = 1;
   
    for(int i = 1; i <= n; i++){
        factorial *= i; 
        e += (1.0/factorial);
    }

    return e;
}