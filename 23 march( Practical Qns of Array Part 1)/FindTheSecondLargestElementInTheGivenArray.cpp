//Find the second largest element in the given Array.

#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int firstMax = arr[0];
    int secondMax = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    return secondMax;
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

    int secondLargest = findSecondLargest(arr, size);
    cout << "Second largest element in the array: " << secondLargest << endl;

}

