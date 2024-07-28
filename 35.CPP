#include <iostream> #include <algorithm> // For std::swap
void reverseArray(int arr[], int n) {
int start = 0; int end = n - 1;
while (start < end) {
std::swap(arr[start], arr[end]); start++; end--;
}
}
void printArray(const int arr[], int n) {
for (int i = 0; i < n; ++i) {
std::cout << arr[i] << " ";
}
std::cout << std::endl;
}
int main() {
int arr[] = {1, 2, 3, 4, 5}; int n = sizeof(arr) / sizeof(arr[0]); std::cout << "Original array: "; printArray(arr, n); reverseArray(arr, n);
std::cout << "Reversed array: "; printArray(arr, n);
return 0;
}
