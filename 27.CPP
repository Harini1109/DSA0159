#include <iostream>
// Function to calculate the factorial of a number int factorial(int n) {
if (n == 0 || n == 1) return 1;
else
return n * factorial(n - 1);
}
// Function to check if a number is a strong number bool isStrongNumber(int n) {
int originalNum = n; int sum = 0;
// Calculate sum of factorial of digits while (n > 0) {
int digit = n % 10;
sum += factorial(digit); n /= 10;
}
// Check if the sum of factorial of digits is equal to the original number return (sum == originalNum);
}
int main() {
int num;
// Ask the user to enter a number std::cout << "Enter a positive integer: "; std::cin >> num;
// Check if the number is a strong number if (isStrongNumber(num))
std::cout << num << " is a strong number.\n";
else
std::cout << num << " is not a strong number.\n";
return 0;
}
