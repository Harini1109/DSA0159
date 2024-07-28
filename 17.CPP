#include <iostream>
int main() {
int n;
// Ask the user to enter the number of terms in the Fibonacci series std::cout << "Enter the number of terms in the Fibonacci series: "; std::cin >> n;
// Initialize the first two terms of the Fibonacci series int t1 = 0, t2 = 1, nextTerm; std::cout << "Fibonacci Series: ";
for (int i = 1; i <= n; ++i) {
std::cout << t1 << " "; nextTerm = t1 + t2; // Calculate the next term
t1 = t2;	// Update t1 t2 = nextTerm;	// Update t2
}
return 0;
}
