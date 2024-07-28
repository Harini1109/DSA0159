#include <iostream>
using namespace std;

// Function to be pointed to
void displayMessage() {
    cout << "Hello from the function pointer!" << endl;
}

int main() {
    void (*funcPtr)() = displayMessage; // Pointer to function

    // Calling the function using the pointer
    funcPtr();

    return 0;
}
