    //WAP to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;

main() {
    int num, digit;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    while (num > 0) {
        digit = num % 10; // Extract the last digit 
        if (digit % 2 == 0) {    // Check if the digit is even
            sum = sum+digit;         // Add the even digit to the sum
        }
        num =num/10;            // Remove the last digit from the number
    }

    cout << "Sum of even digits: " << sum << endl;
}
