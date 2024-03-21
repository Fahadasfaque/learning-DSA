#include <iostream>
using namespace std;

int getProduct(int *num1, int *num2) {
    return (*num1) * (*num2);
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int product = getProduct(&num1, &num2);

    cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;

    return 0;
}
