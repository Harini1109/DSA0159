#include <iostream>
#include <exception>

using namespace std;

void function() {
    throw runtime_error("Runtime error occurred");
}

int main() {
    try {
        function();
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
