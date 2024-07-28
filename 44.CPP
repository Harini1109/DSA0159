#include <iostream>
int main() {
int rows, cols;
// Input dimensions of the 2D array std::cout << "Enter number of rows: "; std::cin >> rows; std::cout << "Enter number of columns: "; std::cin >> cols;
// Dynamically allocate memory for the 2D array int **arr = new int *[rows]; // Array of row pointers
for (int i = 0; i < rows; ++i) {
arr[i] = new int[cols]; // Allocate memory for each row
}
// Input elements of the 2D array std::cout << "Enter " << rows * cols << " elements:\n"; for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) { std::cin >> arr[i][j];
}
}
// Display elements of the 2D array std::cout << "Elements of the 2D array:\n"; for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) { std::cout << arr[i][j] << " ";
}
std::cout << std::endl;
}
// Deallocate memory for the 2D array for (int i = 0; i < rows; ++i) {
delete[] arr[i]; // Delete each row
}
delete[] arr; // Delete the array of row pointers
return 0;
}
