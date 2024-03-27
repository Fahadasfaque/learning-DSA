//Count the number of elements in given array greater than a given number x.

#include <iostream>
using namespace std;

// Function to count the number of elements greater than x in the array
int countGreaterThanX(int arr[], int size, int x) {
    int count = 0;
    // Iterate through the array and count elements greater than x
    for (int i = 0; i < size; ++i) {
        if (arr[i] > x) {
            count++;
        }
    }
    return count;
}

main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    // Count the number of elements greater than x in the array
    int count = countGreaterThanX(arr, size, x);
    cout << "Number of elements greater than " << x << ": " << count << endl;

}
