        //Print the factorial of a given number ‘n’


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int factorial = 1;

    // Calculating factorial
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
