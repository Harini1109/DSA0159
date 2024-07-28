#include <iostream>
int main() {
// Number of rows int n = 5;
// Loop to print each line for(int i = 1; i <= n; ++i) {
// Loop to print the stars in each line for(int j = 1; j <= i; ++j) {
std::cout << "*";
}
std::cout << std::endl; // Move to the next line after each row is printed
}
return 0;
}
