#include <iostream>
using namespace std;

void countDigitsAndPrintSquare(int num) {
    int count = 0;
    int temp = num;

    // Count the number of digits
    while (temp != 0) {
        temp = temp/10;
        count++;
    }

    cout << "The square of " << num << " is: " << num * num << endl;
    cout << "Number of digits in " << num << " is: " << count << endl;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    countDigitsAndPrintSquare(number);

    return 0;
}
