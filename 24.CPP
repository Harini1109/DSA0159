#include <iostream>
int main() {
int num, originalNum, sum = 0;
// Ask the user to enter a number std::cout << "Enter a positive integer: "; std::cin >> num; originalNum = num;
// Calculate sum of digits while (num > 0) { sum += num % 10; num /= 10;
}
// Check if the original number is divisible by the sum of its digits if (originalNum % sum == 0)
std::cout << originalNum << " is a Harshad number.\n";
else
std::cout << originalNum << " is not a Harshad number.\n";
return 0;
}
