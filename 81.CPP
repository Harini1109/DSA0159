#include <iostream> using namespace std;
// Function to calculate factorial of an integer unsigned long long factorial(int n) {
if (n < 0) { cerr << "Factorial of a negative number is undefined." << endl; return 0;
}
unsigned long long result = 1; for (int i = 1; i <= n; ++i) { result *= i;
}
return result;
}
// Overloaded function to calculate factorial of a floating-point number double factorial(double n) {
if (n < 0) {
cerr << "Factorial of a negative number is undefined." << endl; return 0.0;
}
double result = 1.0; for (double i = 1.0; i <= n; ++i) { result *= i;
}
return result;
}
int main() {
// Example usage of factorial function for integer and floating-point numbers int num_int = 5; double num_double = 5.5;
cout << "Factorial of " << num_int << " (integer): " << factorial(num_int) << endl; cout << "Factorial of " << num_double << " (floating-point): " <<
factorial(num_double) << endl; return 0;
}
