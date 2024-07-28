#include <iostream>
int main() {
int num;
std::cout << "Enter an integer: ";
std::cin >> num;
 std::string result = (num % 3 == 0) ? "divisible by 3" : "not divisible by 3";
 std::cout << "The number " << num << " is " << result << "." << std::endl;
return 0;
}
