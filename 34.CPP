#include <iostream>
int main() {
int n = 5; // Number of rows for the upper half of the diamond
// Upper half of the diamond for (int i = 1; i <= n; ++i) { // Print leading spaces for (int j = i; j < n; ++j) {
std::cout << " ";
}
// Print stars for (int j = 1; j <= (2 * i - 1); ++j) { std::cout << "*";
}
std::cout << std::endl;
}
// Lower half of the diamond for (int i = n - 1; i >= 1; --i) { // Print leading spaces for (int j = n; j > i; --j) {
std::cout << " ";
}
// Print stars for (int j = 1; j <= (2 * i - 1); ++j) {
std::cout << "*";
}
std::cout << std::endl;
}
return 0;
}
