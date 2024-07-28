#include <iostream>
double averageArray(const int arr[], int n) {
int sum = 0; for (int i = 0; i < n; ++i) {
sum += arr[i];
}
return static_cast<double>(sum) / n;
}
void printArray(const int arr[], int n) {
for (int i = 0; i < n; ++i) {
std::cout << arr[i] << " ";
}
std::cout << std::endl;
}
int main() {
int arr[] = {1, 2, 3, 4, 5}; int n = sizeof(arr) / sizeof(arr[0]);
std::cout << "Array: "; printArray(arr, n); double average = averageArray(arr, n); std::cout << "Average of all elements: " << average << std::endl;
return 0;
}
