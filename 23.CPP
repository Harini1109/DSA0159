#include <iostream>
int main() {
int num, sum = 0;
// Ask the user to enter a number std::cout << "Enter a number: "; std::cin >> num;
// Calculate the sum of divisors of the number for (int i = 1; i <= num / 2; ++i) {
if (num % i == 0) {
sum += i;
}
}
// Check if the sum of divisors is equal to the number if (sum == num && num != 0) {
std::cout << num << " is a perfect number.\n";
} else { std::cout << num << " is not a perfect number.\n";
}
return 0;
}
