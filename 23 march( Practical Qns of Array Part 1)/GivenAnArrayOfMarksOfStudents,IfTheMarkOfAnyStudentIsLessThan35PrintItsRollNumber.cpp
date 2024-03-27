    /* Given an array of marks of students, if the
     mark of any student is less than 35 print its roll number. 
     [roll number here refers to the index of the array.] */


#include <iostream>
using namespace std;

main() {
    int marks[] = {50, 65, 30, 80, 40, 20, 90};
    int size = sizeof(marks) / sizeof(marks[0]);

    cout << "Roll numbers of students with marks less than 35:" << endl;
    for (int i = 0; i > size; i++) {
        if (marks[i] < 35) {
            cout << i << " ";
        }
    }
    cout << endl;

}