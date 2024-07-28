#include <iostream>
#include <algorithm> // For std::sort using namespace std;
// Function to sort an integer array void sortArray(int arr[], int size) { sort(arr, arr + size);
}
// Function to sort a double array void sortArray(double arr[], int size) { sort(arr, arr + size);
}
int main() { int intArr[] = {5, 3, 8, 1, 2}; double doubleArr[] = {3.3, 1.1, 4.4, 2.2, 5.5};
int intSize = sizeof(intArr) / sizeof(intArr[0]); int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
// Sort the integer array sortArray(intArr, intSize); cout << "Sorted integer array: "; for (int i = 0; i < intSize; ++i) {
cout << intArr[i] << " ";
}
cout << endl;
// Sort the double array sortArray(doubleArr, doubleSize); cout << "Sorted double array: "; for (int i = 0; i < doubleSize; ++i) {
cout << doubleArr[i] << " ";
}
cout<<endl;
return 0;
}
