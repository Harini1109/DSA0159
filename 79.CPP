#include <iostream> using namespace std;
const int ROWS = 2; const int COLS = 2;
// Function to calculate the sum of two matrices void sum(const int mat1[ROWS][COLS], const int mat2[ROWS][COLS], int result[ROWS][COLS]) {
for (int i = 0; i < ROWS; ++i) {
for (int j = 0; j < COLS; ++j) {
result[i][j] = mat1[i][j] + mat2[i][j]; }
}
}
// Function to calculate the sum of two arrays void sum(const int arr1[], const int arr2[], int result[], int size) { for (int i = 0; i < size; ++i) { result[i] = arr1[i] + arr2[i];
}
}
int main() { // Matrices int mat1[ROWS][COLS] = { {1, 2}, {3, 4} }; int mat2[ROWS][COLS] = { {5, 6}, {7, 8} }; int resultMat[ROWS][COLS]; sum(mat1, mat2, resultMat);
cout << "Sum of matrices:" << endl; for (int i = 0; i < ROWS; ++i) {
for (int j = 0; j < COLS; ++j) {
cout << resultMat[i][j] << " ";
}
cout << endl;
}
// Arrays int arr1[] = {1, 2, 3, 4}; int arr2[] = {5, 6, 7, 8}; int size = sizeof(arr1) / sizeof(arr1[0]); int resultArr[size]; sum(arr1, arr2, resultArr, size);
cout << "Sum of arrays:" << endl; for (int i = 0; i < size; ++i) {
cout << resultArr[i] << " ";
}
cout << endl;
return 0;
}
