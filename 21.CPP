#include <iostream>
int main() {
int a, b;
// Ask the user to enter two numbers std::cout << "Enter two numbers: "; std::cin >> a >> b; int temp;
// Ensure a and b are positive if (a < 0) a = -a; if (b < 0) b = -b;
// Calculate the GCD using the Euclidean algorithm with a do-while loop do {
temp = b; b = a % b; a = temp;
} while (b != 0);
// Output result std::cout << "The GCD is: " << a << std::endl;
return 0;
}
