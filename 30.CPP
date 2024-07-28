#include <iostream>
#include <cmath> // For pow function
// Function to count the number of digits in a number int countDigits(int n) {
int count = 0; while (n != 0) { n /= 10;
++count;
}
return count;
}
// Function to check if a number is a narcissistic number bool isNarcissisticNumber(int n) { int originalNum = n; int numDigits = countDigits(n); int sum = 0;
// Calculate sum of digits each raised to the power of numDigits while (n > 0) {
int digit = n % 10; sum += pow(digit, numDigits); n /= 10;
}
// Check if the sum of powers of digits equals the original number return (sum == originalNum);
}
int main() {
int num;
// Ask the user to enter a number std::cout << "Enter a positive integer: "; std::cin >> num;
// Check if the number is a narcissistic number if (isNarcissisticNumber(num))
std::cout << num << " is a narcissistic number.\n";
else
std::cout << num << " is not a narcissistic number.\n";
return 0;
}
