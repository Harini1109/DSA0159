#include <iostream>
#include <cmath> 
int main() {
double num1, num2;
 std::cout << "Enter the first floating-point number: "; 
 std::cin >> num1; std::cout << "Enter the second floating-point number: "; 
 std::cin >> num2;
 double addition = num1 + num2; 
 double subtraction = num1 - num2; 
 double multiplication = num1 * num2; double division = (num2 != 0) ? num1 / num2 : 0; 
 double modulo = (num2 != 0) ? fmod(num1, num2) : 0;
 std::cout << num1 << " + " << num2 << " = " << addition << std::endl; 
 std::cout << num1 << " - " << num2 << " = " << subtraction << std::endl; 
 std::cout << num1 << " * " << num2 << " = " << multiplication << std::endl; if (num2 != 0) {
std::cout << num1 << " / " << num2 << " = " << division << std::endl; std::cout << num1 << " % " << num2 << " = " << modulo << std::endl;
} else { std::cout << "Division and modulo by zero are undefined." << std::endl;
}
return 0;
}
