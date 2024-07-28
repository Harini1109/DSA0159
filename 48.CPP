#include <iostream>
// Function to calculate factorial int factorial(int n) { if (n <= 1) {
return 1; // Base case: factorial of 0 or 1 is 1
} else { return n * factorial(n - 1); // Recursive case
}
}
int main() {
int number; std::cout << "Enter a number: "; std::cin >> number;
int result = factorial(number); std::cout << "Factorial of " << number << " is " << result << std::endl;
return 0;
}
