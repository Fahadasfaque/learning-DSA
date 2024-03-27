//Find the maximum value out of all the elements in the array.

#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int maxVal = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
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

    int maxVal = findMax(arr, size);
    cout << "Maximum value in the array: " << maxVal << endl;

}
