#include <iostream>
using namespace std;

int main() {
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float* ptr = arr; // Pointer to the first element of the float array

    cout << "Float array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " "; // Access array elements through the pointer
    }
    cout << endl;

    return 0;
}
