#include <iostream>
using namespace std;
// Function to print an integer array void printArray(const int arr[], int size) {
cout << "Integer array: "; for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";
}
cout << endl;
}
// Function to print a double array void printArray(const double arr[], int size) {
cout << "Double array: "; for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";
}
cout << endl;
}
// Function to print a character array void printArray(const char arr[], int size) {
cout << "Character array: "; for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";
}
cout << endl;
}
int main() {
int intArr[] = {1, 2, 3, 4, 5}; double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5}; char charArr[] = {'a', 'b', 'c', 'd', 'e'};
int intSize = sizeof(intArr) / sizeof(intArr[0]); int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]); int charSize = sizeof(charArr) / sizeof(charArr[0]);
printArray(intArr, intSize); printArray(doubleArr, doubleSize); printArray(charArr, charSize);
return 0;
}
