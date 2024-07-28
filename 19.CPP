#include <iostream> #include <string>
int main() {
std::string str;
// Ask the user to enter a string std::cout << "Enter a string: "; std::cin >> str;
int left = 0; int right = str.length() - 1; bool isPalindrome = true; // Check if the string is a palindrome while (left < right) {
if (str[left] != str[right]) {
isPalindrome = false; break;
} left++; right--;
}
// Output result if (isPalindrome)
std::cout << str << " is a palindrome.\n";
else
std::cout << str << " is not a palindrome.\n";
return 0;
}
