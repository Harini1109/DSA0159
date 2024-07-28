#include <iostream>
void insertElement(int arr[], int &n, int element, int position, int max_size) {
// Check if there's space in the array if (n >= max_size) {
std::cout << "Array is full. Cannot insert new element." << std::endl; return;
}
// Check for valid position if (position < 0 || position > n) {
std::cout << "Invalid position. Please enter a position between 0 and " << n <<
std::endl; return;
}
// Shift elements to the right to make space for the new element for (int i = n; i > position; --i) { arr[i] = arr[i - 1];
}
// Insert the new element arr[position] = element; n++;
}
void printArray(const int arr[], int n) {
for (int i = 0; i < n; ++i) {
std::cout << arr[i] << " ";
}
std::cout << std::endl;
}
int main() {
const int max_size = 10; // Maximum size of the array int arr[max_size] = {1, 2, 3, 4, 5}; int n = 5; // Current number of elements in the array
std::cout << "Original array: "; printArray(arr, n);
int element = 99; int position = 3; insertElement(arr, n, element, position, max_size);
std::cout << "Array after insertion: "; printArray(arr, n);
return 0;
}
