#include <iostream>
int main() {
int num1, num2;
 std::cout << "Enter the first number: "; 
 std::cin >> num1; 
 std::cout << "Enter the second number: "; 
 std::cin >> num2;
 if (num1 == num2) {
std::cout << num1 << " and " << num2 << " are equal." << std::endl;
} else { std::cout << num1 << " and " << num2 << " are not equal." << std::endl;
}
return 0;
}
