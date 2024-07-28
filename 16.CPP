#include <iostream>
int main() {
int num;
// Ask the user to enter a number std::cout << "Enter a number to print its multiplication table: "; std::cin >> num;
// Print the multiplication table std::cout << "Multiplication Table of " << num << ":\n"; for (int i = 1; i <= 10; ++i) {
std::cout << num << " x " << i << " = " << num * i << std::endl;
}
return 0;
}
