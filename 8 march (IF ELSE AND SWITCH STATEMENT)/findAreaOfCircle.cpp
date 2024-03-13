#include <iostream>

using namespace std;

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = 3.14 * radius * radius;
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}
