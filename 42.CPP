#include <iostream>
void mergeArrays(const int arr1[], int size1, const int arr2[], int size2, int mergedArr[])
{
int i = 0, j = 0, k = 0;
// Merge arrays while both arrays have elements left while (i < size1 && j < size2) { if (arr1[i] < arr2[j]) {
mergedArr[k++] = arr1[i++];
} else { mergedArr[k++] = arr2[j++];
}
}
// Copy remaining elements of arr1, if any while (i < size1) {
mergedArr[k++] = arr1[i++];
}
// Copy remaining elements of arr2, if any while (j < size2) {
mergedArr[k++] = arr2[j++];
}
}
void printArray(const int arr[], int size) {
for (int i = 0; i < size; ++i) { std::cout << arr[i] << " ";
}
std::cout << std::endl;
}
int main() {
const int size1 = 5; const int size2 = 4; int arr1[size1] = {1, 3, 5, 7, 9}; int arr2[size2] = {2, 4, 6, 8}; const int mergedSize = size1 + size2; int mergedArr[mergedSize];
std::cout << "Array 1: "; printArray(arr1, size1);
std::cout << "Array 2: "; printArray(arr2, size2); mergeArrays(arr1, size1, arr2, size2, mergedArr);
std::cout << "Merged Array: "; printArray(mergedArr, mergedSize);
return 0;
}
