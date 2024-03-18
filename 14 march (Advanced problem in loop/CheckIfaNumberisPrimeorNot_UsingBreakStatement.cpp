            //WAP to check if a number is prime or not (use of break statement)

#include <iostream>
using namespace std;

main() {
    int number;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> number;//5

    if (number <= 1) //5<=1
        isPrime = 0;
    else {
        int i = 2;
        while (i <= number / 2) {//2<=3/2   2<=1.5
            if (number % i == 0) {
                isPrime = false;
                break;
            }
            ++i;
        }
    }

    if (isPrime)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

}
