            //Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.


#include <iostream>
using namespace std;

main() {
    int n;
    int a = 1;
    int ratio = 2;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Geometric Progression upto " << n << " terms:\n";
    for(int i = 1; i < n; i++) {
        cout << a<<", ";
        a = a * ratio;
    }

}
