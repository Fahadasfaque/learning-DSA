#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "Combination (" << n << "C" << r << ") = " << combination(n, r) << endl;
    cout << "Permutation (" << n << "P" << r << ") = " << permutation(n, r) << endl;

    return 0;
}
