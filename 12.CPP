#include <iostream>
int main() {
int num1, num2;
 std::cout << "Enter the first integer: "; 
 std::cin >> num1; std::cout << "Enter the second integer: ";
  std::cin >> num2;
 std::string result = (num1 == num2) ? "equal" : "not equal";

std::cout << "The numbers " << num1 << " and " << num2 << " are " << result <<
"." << std::endl;
return 0;
}
