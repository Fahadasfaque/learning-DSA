/*                  Q.4:  Calculating_Simple_Interest   */

#include <iostream>
using namespace std;

main() {

    float principal, rate, time, interest;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in percentage): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << interest << endl;

}
/*
    output:-

    Enter principal amount: 5000
    Enter rate of interest (in percentage): 5
    Enter time (in years): 5
    Simple Interest = 1250  

*/
