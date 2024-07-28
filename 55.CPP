#include <iostream> using namespace std;
// Function to calculate the area of a circle double calculateArea(double radius) {
const double pi = 3.14159;
return pi * radius * radius;
}
int main() {
double radius;
cout << "Enter the radius of the circle: "; cin >> radius;
// Check if the radius is non-negative if (radius >= 0) {
double area = calculateArea(radius); cout << "The area of the circle with radius " << radius << " is: " << area << endl;
} else { cout << "Invalid radius entered. Radius should be non-negative." << endl;
}
return 0;
}
