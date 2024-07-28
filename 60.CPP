#include <iostream>
// Function to find the minimum element in an array int findMin(int arr[], int size) { int min = arr[0]; for (int i = 1; i < size; ++i) {
if (arr[i] < min) {
min = arr[i];
}
}
return min;
}
// Function to find the maximum element in an array int findMax(int arr[], int size) { int max = arr[0]; for (int i = 1; i < size; ++i) {
if (arr[i] > max) {
max = arr[i];
}
}
return max;
}
int main() {
int size; std::cout << "Enter the size of the array: "; std::cin >> size;
int* arr = new int[size]; std::cout << "Enter the elements of the array: "; for (int i = 0; i < size; ++i) {
std::cin >> arr[i];
}
int min = findMin(arr, size); int max = findMax(arr, size);
std::cout << "Minimum element: " << min << std::endl; std::cout << "Maximum element: " << max << std::endl;
delete[] arr; // Free the allocated memory return 0;
}
