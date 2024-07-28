#include <iostream>
#include <cmath> // For std::abs using namespace std;
// Function to find absolute value of an integer number int absolute(int num) {
 
return abs(num);
}
// Function to find absolute value of a floating-point number double absolute(double num) {
return abs(num);
}
int main() {
int intValue = -5; double doubleValue = -7.5;
// Calculate absolute value of integer cout << "Absolute value of " << intValue << " is: " << absolute(intValue) << endl;
// Calculate absolute value of double cout << "Absolute value of " << doubleValue << " is: " << absolute(doubleValue)
<< endl;
return 0;
}
