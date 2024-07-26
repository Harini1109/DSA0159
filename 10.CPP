#include <iostream>
void swap(int& a, int& b) {
if (&a != &b) { a = a ^ b; 
b = a ^ b;
 a = a ^ b;
}
}
int main() {
int num1, num2;
 std::cout << "Enter the first integer: "; 
 std::cin >> num1; 
 std::cout << "Enter the second integer: "; 
 std::cin >> num2;
std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 <<
std::endl;
 swap(num1, num2);
  std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 <<
std::endl;
return 0;
}
