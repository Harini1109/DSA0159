#include <iostream>
int main() {
int num1, num2;
std::cout << "Enter the first integer: "; 
std::cin >> num1; 
std::cout << "Enter the second integer: "; 
std::cin >> num2;
int addition = num1 + num2; 
int subtraction = num1 - num2; 
int multiplication = num1 * num2; 
double division = (num2 != 0) ? static_cast<double>(num1) / num2 : 0; 
int modulo = (num2 != 0) ? num1 % num2 : 0;
std::cout << num1 << " + " << num2 << " = " << addition << std::endl; 
std::cout << num1 << " - " << num2 << " = " << subtraction << std::endl; 
std::cout << num1 << " * " << num2 << " = " << multiplication << std::endl; 
if (num2 != 0) {
std::cout << num1 << " / " << num2 << " = " << division << std::endl; 
std::cout << num1 << " % " << num2 << " = " << modulo << std::endl;
} else { std::cout << "Division and modulo by zero are undefined." << std::endl;
}
return 0;
}
