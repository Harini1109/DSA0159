#include <iostream> using namespace std;
// Function to add two integers int add(int a, int b) {
return a + b;
}
// Function to add two floating-point numbers float add(float a, float b) {
return a + b;
}
int main() {
int int1 = 5, int2 = 10; float float1 = 5.5, float2 = 10.5;
cout << "The sum of two integers: " << add(int1, int2) << endl; cout << "The sum of two floats: " << add(float1, float2) << endl;
return 0;
}
