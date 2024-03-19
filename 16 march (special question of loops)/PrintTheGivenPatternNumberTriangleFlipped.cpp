            // Print the given pattern Number Triangle Flipped
            // 1
            // 1 2
            // 1 2 3
            // 1 2 3 4

#include <iostream>
using namespace std;

main() {
    int n;

    cout << "Enter the number of rows for the Number Triangle Flipped: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

}
