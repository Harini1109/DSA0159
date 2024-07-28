#include <iostream> const int MAX_SIZE = 100;
void sumOfDiagonals(const int matrix[][MAX_SIZE], int size) {
int primaryDiagonalSum = 0; int secondaryDiagonalSum = 0;
// Sum of primary diagonal (top-left to bottom-right) for (int i = 0; i < size; ++i) {
primaryDiagonalSum += matrix[i][i];
}
// Sum of secondary diagonal (top-right to bottom-left) for (int i = 0; i < size; ++i) {
secondaryDiagonalSum += matrix[i][size - 1 - i];
}
// Display sums std::cout << "Sum of primary diagonal: " << primaryDiagonalSum << std::endl; std::cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << std::endl;
}
void printMatrix(const int matrix[][MAX_SIZE], int size) {
std::cout << "Matrix:" << std::endl; for (int i = 0; i < size; ++i) {
for (int j = 0; j < size; ++j) { std::cout << matrix[i][j] << " ";
}
std::cout << std::endl;
}
}
int main() { int size;
// Input size of the matrix
std::cout << "Enter size of the square matrix: "; std::cin >> size; int matrix[MAX_SIZE][MAX_SIZE];
// Input elements of the matrix std::cout << "Enter elements of the matrix:" << std::endl; for (int i = 0; i < size; ++i) { for (int j = 0; j < size; ++j) { std::cin >> matrix[i][j];
}
}
// Print the matrix printMatrix(matrix, size);
// Calculate and print the sum of diagonals sumOfDiagonals(matrix, size);
return 0;
}
