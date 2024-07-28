#include <iostream>
int countOccurrences(const int arr[], int n, int value) {
int count = 0; for (int i = 0; i < n; ++i) { if (arr[i] == value) {
count++;
}
}
return count;
}
void printArray(const int arr[], int n) {
for (int i = 0; i < n; ++i) {
std::cout << arr[i] << " ";
}
std::cout << std::endl;
}
int main() {
int arr[] = {10, 5, 8, 10, 20, 10, 25};
int n = sizeof(arr) / sizeof(arr[0]); int value = 10;
std::cout << "Array: "; printArray(arr, n); int occurrences = countOccurrences(arr, n, value);
std::cout << "Number of occurrences of " << value << " in the array: " <<
occurrences << std::endl;
return 0;
}
