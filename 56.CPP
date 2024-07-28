#include <iostream> #include <string> using namespace std;
// Function to check if a string is palindrome bool isPalindrome(const string& str) { int left = 0; int right = str.length() - 1;
while (left < right) { if (str[left] != str[right]) {
return false; // Not a palindrome
} left++; right--;
}
return true; // Palindrome
}
int main() {
string str; cout << "Enter a string: "; cin >> str;
if (isPalindrome(str)) {
cout << str << " is a palindrome." << endl;
} else { cout << str << " is not a palindrome." << endl;
}
return 0;
}
