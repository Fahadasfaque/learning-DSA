#include <iostream>
using namespace std;

void printOddNumbers(int a, int b) {
    if (a > b) {
        swap(a, b);
    }

    cout << "Odd numbers between " << a << " and " << b << " are:" << endl;
    for (int i = a; i <= b; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // Call the function to print odd numbers between a and b
    printOddNumbers(a, b);

    return 0;
}
