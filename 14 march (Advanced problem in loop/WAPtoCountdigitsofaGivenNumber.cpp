        //WAP to count digits of a given number


#include <iostream>
using namespace std;

main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int count = 0;
    int temp = number;

    while (temp != 0) {
        count++;          
        temp = temp / 10;       
    }

    cout << "Number of digits: " << count << endl;

}
