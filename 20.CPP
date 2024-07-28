#include <iostream>
int main() {
int n, sum = 0;
// Ask the user to enter a number std::cout << "Enter a number: "; std::cin >> n;
// Calculate the sum of all digits while (n != 0) {
sum += n % 10; // Add the last digit to the sum n /= 10;	// Remove the last digit
}
// Output result std::cout << "The sum of all digits is: " << sum << std::endl;
return 0;
}
