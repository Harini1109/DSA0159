#include <iostream> using namespace std;
// Function to find the maximum of two integers int maxValue(int a, int b) {
return (a > b) ? a : b;
}
// Function to find the maximum of two floating-point numbers float maxValue(float a, float b) {
return (a > b) ? a : b;
}
// Function to find the maximum of two characters char maxValue(char a, char b) {
return (a > b) ? a : b;
}
int main() {
int int1 = 5, int2 = 10; float float1 = 5.5, float2 = 10.5; char char1 = 'a', char2 = 'z';
cout << "The maximum of two integers: " << maxValue(int1, int2) << endl; cout << "The maximum of two floats: " << maxValue(float1, float2) << endl; cout << "The maximum of two characters: " << maxValue(char1, char2) << endl;
return 0;
}
