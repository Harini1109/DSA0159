#include <iostream> #include <vector>
class Matrix { private:
std::vector<std::vector<int>> data; int rows, cols;
public:
// Constructor to initialize the matrix with given rows and columns
Matrix(int r, int c) : rows(r), cols(c) {
data.resize(r, std::vector<int>(c, 0));
}
// Function to set value at a specific position void set_value(int r, int c, int value) {
data[r][c] = value;
}
// Function to get value at a specific position int get_value(int r, int c) const { return data[r][c];
}
// Function to get the number of rows int get_rows() const {
return rows;
}
// Function to get the number of columns int get_cols() const {
return cols;
}
// Overload the * operator to multiply two matrices
Matrix operator*(const Matrix& other) const { if (cols != other.rows) {
throw std::invalid_argument("Matrix dimensions do not match for
multiplication.");
}
Matrix result(rows, other.cols); for (int i = 0; i < rows; ++i) {
for (int j = 0; j < other.cols; ++j) {
for (int k = 0; k < cols; ++k) {
result.data[i][j] += data[i][k] * other.data[k][j]; }
}
}
return result;
}
// Overload the << operator to print the matrix friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
for (int i = 0; i < matrix.rows; ++i) {
for (int j = 0; j < matrix.cols; ++j) {
os << matrix.data[i][j] << " ";
}
os << std::endl;
}
return os;
}
};
int main() {
// Initialize first matrix (2x3) Matrix mat1(2, 3); mat1.set_value(0, 0, 1); mat1.set_value(0, 1, 2); mat1.set_value(0, 2, 3); mat1.set_value(1, 0, 4); mat1.set_value(1, 1, 5); mat1.set_value(1, 2, 6);
// Initialize second matrix (3x2) Matrix mat2(3, 2); mat2.set_value(0, 0, 7); mat2.set_value(0, 1, 8); mat2.set_value(1, 0, 9); mat2.set_value(1, 1, 10); mat2.set_value(2, 0, 11); mat2.set_value(2, 1, 12);
try {
// Multiply the matrices
Matrix result = mat1 * mat2;
// Print the result std::cout << "Result of matrix multiplication:" << std::endl; std::cout << result;
} catch (const std::invalid_argument& e) { std::cerr << e.what() << std::endl;
}
return 0;
}
