#include <iostream>
// Function to check if a number is a neon number bool isNeonNumber(int n) { int sumOfDigits = 0;
// Calculate sum of digits while (n > 0) {
int digit = n % 10; sumOfDigits += digit; n /= 10;
}
// Check if the square of sum of digits equals the original number return (sumOfDigits * sumOfDigits == n);
}
int main() {
int num;
// Ask the user to enter a number std::cout << "Enter a positive integer: "; std::cin >> num;
// Check if the number is a neon number if (isNeonNumber(num))
std::cout << num << " is a neon number.\n";
else
std::cout << num << " is not a neon number.\n";
return 0;
}
