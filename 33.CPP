#include <iostream> #include <vector>
int main() {
// Number of rows in Pascal's Triangle int numRows = 5;
// Vector to store the current row std::vector<int> currentRow;
// Loop through each row for (int i = 0; i < numRows; ++i) { // Start each row with 1 currentRow.push_back(1);
// Loop through the elements of the previous row to generate the current row for (int j = i - 1; j > 0; --j) {
currentRow[j] = currentRow[j] + currentRow[j - 1];
}
// Print the current row for (int j = 0; j <= i; ++j) {
std::cout << currentRow[j] << " ";
}
std::cout << std::endl;
}
return 0;
}
