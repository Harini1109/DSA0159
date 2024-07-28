#include <iostream>
#include <unordered_set>
// Function to calculate the sum of squares of digits int sumOfSquares(int n) {
int sum = 0; while (n > 0) {
int digit = n % 10; sum += digit * digit; n /= 10;
}
return sum;
}
// Function to check if a number is a happy number bool isHappyNumber(int n) {
std::unordered_set<int> seen; while (n != 1 && seen.find(n) == seen.end()) { seen.insert(n);
n = sumOfSquares(n);
}
return n == 1;
}
int main() {
int num;
// Ask the user to enter a number std::cout << "Enter a positive integer: "; std::cin >> num;
// Check if the number is a happy number if (isHappyNumber(num))
std::cout << num << " is a happy number.\n";
else std::cout << num << " is not a happy number.\n";
return 0;
}
