      //Display this AP - 100,97,94,..upto all terms which are positive


#include <iostream>
using namespace std;

main() {

    int a,b,d;
    a=100;
    b=97;
    d=b-a;
    cout << "Arithmetic Progression starting from 100, decreasing by "<<d<<":\n";
    while (a > 0) {
        cout << a<<", ";
        a =a+d;
    }
    
}
