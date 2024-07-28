#include <iostream> #include <stdexcept>
class MyArray { private: int* data; int size;
public:
// Constructor to initialize the array with a given size
MyArray(int s) : size(s) { data = new int[size];
}
// Destructor to free the allocated memory
~MyArray() { delete[] data;
}
// Function to set value at a specific index void set_value(int index, int value) {
if (index < 0 || index >= size) {
throw std::out_of_range("Index out of range");
}
data[index] = value;
}
// Overload the [] operator to access elements int& operator[](int index) {
if (index < 0 || index >= size) {
throw std::out_of_range("Index out of range");
}
return data[index];
}
// Overload the [] operator to access elements (const version) const int& operator[](int index) const {
if (index < 0 || index >= size) {
throw std::out_of_range("Index out of range");
}
return data[index];
}
// Function to get the size of the array int get_size() const { return size;
}
};
int main() {
// Initialize an array of size 5
MyArray arr(5);
// Set values in the array for (int i = 0; i < arr.get_size(); ++i) { arr.set_value(i, i * 10);
}
// Access and print values using the overloaded [] operator for (int i = 0; i < arr.get_size(); ++i) {
std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}
// Demonstrate const correctness const MyArray& constArr = arr; std::cout << "constArr[2] = " << constArr[2] << std::endl;
// Uncommenting the following line will throw an exception due to out of range access
// std::cout << arr[5] << std::endl;
return 0;
}
