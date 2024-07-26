#include <iostream>
int main() {
int num1, num2, num3;
 std::cout << "Enter the first integer: "; 
 std::cin >> num1; 
 std::cout << "Enter the second integer: "; 
 std::cin >> num2; 
 std::cout << "Enter the third integer: "; 
 std::cin >> num3;
 double average = static_cast<double>(num1 + num2 + num3) / 3;
std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is " << average << std::endl;
return 0;
}
