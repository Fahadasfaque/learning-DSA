#include <iostream>
using namespace std;

int main() {
    int array[] = {2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int product = 1;

    for (int i = 0; i < size; ++i) {
        product *= array[i];
    }

    cout << "Product of all elements in the array: " << product << endl;
    return 0;
}
