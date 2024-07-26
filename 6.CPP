#include <iostream>
int main() {
char ch;
 std::cout << "Enter a character: "; 
 std::cin >> ch;
char lower_ch = tolower(ch); if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch
== 'u') { std::cout << ch << " is a vowel." << std::endl;
} else if ((lower_ch >= 'a' && lower_ch <= 'z') || (lower_ch >= 'A' && lower_ch <=
'Z')) {
std::cout << ch << " is a consonant." << std::endl;
} else { std::cout << ch << " is not a letter." << std::endl;
}
return 0;
}
