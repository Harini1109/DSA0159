#include <iostream>
#include <cmath> // For std::pow using namespace std;
// Function to calculate the power of an integer number int power(int base, int exponent) {
return pow(base, exponent);
}
// Function to calculate the power of a floating-point number double power(double base, double exponent) {
return pow(base, exponent);
}
int main() {
int intBase = 2, intExponent = 3; double doubleBase = 2.5, doubleExponent = 3.0;
// Calculate power for integer base and exponent cout << intBase << " raised to the power of " << intExponent << " is: " <<
power(intBase, intExponent) << endl;
// Calculate power for floating-point base and exponent cout << doubleBase << " raised to the power of " << doubleExponent << " is: " <<
power(doubleBase, doubleExponent) << endl;
return 0;
}
