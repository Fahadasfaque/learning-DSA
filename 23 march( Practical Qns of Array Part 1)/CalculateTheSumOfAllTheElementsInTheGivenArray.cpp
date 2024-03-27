// Calculate the sum of all the elements in the given array.


#include <iostream>
using namespace std;

main() {
    int marks[] = {50, 65, 30, 80, 40, 20, 90};
    int size = sizeof(marks) / sizeof(marks[0]);

    // Calculate the sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += marks[i];
    }

    // Output the sum
    cout << "Sum of all elements: " << sum << endl;

}
