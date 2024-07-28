#include <iostream>
int main() {
int number; 
unsigned long long factorial = 1; 
 std::cout << "Enter a positive integer: "; 
std::cin >> number;
// Check if the number is negative if (number < 0) {
std::cout << "Error: Factorial of a negative number doesn't exist." << std::endl;
} else {
// Calculate factorial using a for loop for (int i = 1; i <= number; ++i) { factorial *= i;
}
// Display the factorial std::cout << "Factorial of " << number << " = " << factorial << std::endl;
}
return 0;
}
