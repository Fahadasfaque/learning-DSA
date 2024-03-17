        //Display this GP - 3,12,48,.. upto ‘n’ terms. 

#include <iostream>
using namespace std;

main() {
    int n;
    int a = 3;
    int b = 12;
    int ratio = b/a;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Geometric Progression upto " << n << " terms:\n";
    for(int i = 1; i < n; i++) {
        cout << a<<", ";
        a = a * ratio;
    }

}