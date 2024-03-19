        //PRINT THE STAR CROSS PATTERN

#include <iostream>
using namespace std;

main() {
    int n;
    
    cout << "Enter the size of the pattern: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == i || j == n - i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
