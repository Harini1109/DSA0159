#include <iostream> const int MAX_SIZE = 100;
void multiplyMatrices(const int mat1[][MAX_SIZE], const int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2) {
// Initialize result matrix with zeros for (int i = 0; i < rows1; ++i) {
for (int j = 0; j < cols2; ++j) { result[i][j] = 0;
}
}
// Multiply matrices for (int i = 0; i < rows1; ++i) {
for (int j = 0; j < cols2; ++j) {
for (int k = 0; k < cols1; ++k) {
result[i][j] += mat1[i][k] * mat2[k][j];
}
}
}
}
void printMatrix(const int matrix[][MAX_SIZE], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) { std::cout << matrix[i][j] << " ";
}
std::cout << std::endl;
}
}
int main() {
int rows1, cols1, rows2, cols2;
// Input dimensions of the first matrix std::cout << "Enter number of rows for matrix 1: "; std::cin >> rows1; std::cout << "Enter number of columns for matrix 1: "; std::cin >> cols1;
// Input dimensions of the second matrix std::cout << "Enter number of rows for matrix 2: "; std::cin >> rows2; std::cout << "Enter number of columns for matrix 2: "; std::cin >> cols2;
// Check if multiplication is possible if (cols1 != rows2) {
std::cout << "Matrix multiplication not possible. Columns of matrix 1 must be
equal to rows of matrix 2." << std::endl; return 0;
}
