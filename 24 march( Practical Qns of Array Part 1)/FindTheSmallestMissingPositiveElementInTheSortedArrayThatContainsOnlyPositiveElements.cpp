#include <iostream>
using namespace std;

int findSmallestMissingPositive(int arr[], int size) {
    int smallestMissing = 1;

    for (int i = 0; i < size; ++i) {
        if (arr[i] <= 0) {
            continue;
        }

        if (arr[i] == smallestMissing) {
            smallestMissing++;
        } else {
            break;
        }
    }

    return smallestMissing;
}

main() {
    int array[] = {1, 2, 3, 5, 6, 8};
    int size = sizeof(array) / sizeof(array[0]);

    int smallestMissing = findSmallestMissingPositive(array, size);

    cout << "The smallest missing positive element is: " << smallestMissing << endl;

}
