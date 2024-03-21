#include <iostream>
using namespace std;

float calculateArea(float radius) {
    float PI = 3.14;
    return PI * radius * radius;
}

int main() {
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = calculateArea(radius);
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}
