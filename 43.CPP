#include <iostream>
int main() {
int size;
// Input size of the array std::cout << "Enter the size of the array: "; std::cin >> size;
// Dynamically allocate memory for the array int *arr = new int[size];
// Input elements of the array std::cout << "Enter " << size << " elements:\n"; for (int i = 0; i < size; ++i) { std::cin >> arr[i];
}
// Display elements of the array std::cout << "Elements of the array:\n"; for (int i = 0; i < size; ++i) { std::cout << arr[i] << " ";
}
std::cout << std::endl;
// Deallocate memory for the array delete[] arr;
return 0;
}
