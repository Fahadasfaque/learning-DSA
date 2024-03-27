#include <iostream>
using namespace std;

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
    cout << "Enter the element to find: ";
    cin >> x;

    // Finding element x in the array
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            cout << "Element " << x << " found in the array." << endl;
        }
         else {
        cout << "Element " << x << " not found in the array." << endl;
        }
    }
}


