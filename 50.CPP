#include <iostream>
#include <string>
// Function to reverse a string std::string reverseString(const std::string& str) {
int n = str.length(); std::string reversed; for (int i = n - 1; i >= 0; --i) {
reversed += str[i];
}
return reversed;
}
int main() {
std::string input; std::cout << "Enter a string: "; std::getline(std::cin, input);
std::string reversed = reverseString(input); std::cout << "Reversed string: " << reversed << std::endl;
return 0;
}
