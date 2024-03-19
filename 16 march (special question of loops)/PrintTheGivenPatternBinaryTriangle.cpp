            //  Print the given pattern(BINARY TRIANGLE)
            // 1
            // 0 1
            // 1 0 1
            // 0 1 0 1

#include <iostream>
using namespace std;

main() {
    int n;

    cout << "Enter the number of rows for the binary triangle: ";
    cin >> n;
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = 1 - num; 
        }
        cout << endl;
    }

}
