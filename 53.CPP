#include <iostream>
#include <string>
// Function to count the number of elements in a string int countElements(const std::string& str) { return str.length();
}
int main() { std::string input; std::cout << "Enter a string: "; std::getline(std::cin, input);
int count = countElements(input); std::cout << "The number of elements in the string is: " << count << std::endl;
return 0;
}
