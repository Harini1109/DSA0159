CODE:
#include <iostream>
const int MAX_ROWS = 100; const int MAX_COLS = 100;
void addMatrices(const int mat1[][MAX_COLS], const int mat2[][MAX_COLS], int result[][MAX_COLS], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
result[i][j] = mat1[i][j] + mat2[i][j]; }
}
}
void printMatrix(const int matrix[][MAX_COLS], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
std::cout << matrix[i][j] << " ";
}
std::cout << std::endl;
}
}
int main() {
int rows, cols;
// Input dimensions of the matrices std::cout << "Enter number of rows: "; std::cin >> rows; std::cout << "Enter number of columns: "; std::cin >> cols;
int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS],
result[MAX_ROWS][MAX_COLS];
// Input elements of the first matrix std::cout << "Enter elements of the first matrix:" << std::endl; for (int i = 0; i < rows; ++i) { for (int j = 0; j < cols; ++j) {
std::cin >> mat1[i][j];
}
}
// Input elements of the second matrix std::cout << "Enter elements of the second matrix:" << std::endl; for (int i = 0; i < rows; ++i) { for (int j = 0; j < cols; ++j) {
std::cin >> mat2[i][j];
}
}
// Add the two matrices addMatrices(mat1, mat2, result, rows, cols);
// Display the result matrix std::cout << "Resultant matrix after addition:" << std::endl; printMatrix(result, rows, cols);
return 0;
}
