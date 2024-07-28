#include <iostream>
void deleteElement(int arr[], int &n, int position) {
// Check for valid position if (position < 0 || position >= n) {
std::cout << "Invalid position. Please enter a position between 0 and " << n - 1
<< std::endl; return;
}
// Shift elements to the left to fill the gap for (int i = position; i < n - 1; ++i) { arr[i] = arr[i + 1];
}
// Decrease the size of the array
n--;
}
void printArray(const int arr[], int n) {
for (int i = 0; i < n; ++i) {
std::cout << arr[i] << " ";
}
std::cout << std::endl;
}
int main() {
const int max_size = 10; // Maximum size of the array int arr[max_size] = {1, 2, 3, 4, 5}; int n = 5; // Current number of elements in the array
std::cout << "Original array: "; printArray(arr, n); int position = 2; deleteElement(arr, n, position);
std::cout << "Array after deletion: "; printArray(arr, n);
return 0;
}
