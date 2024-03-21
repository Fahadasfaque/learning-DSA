#include <iostream>
using namespace std;

int getSum(int *num1, int *num2) {
    return (*num1) + (*num2);
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int sum = getSum(&num1, &num2);

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
