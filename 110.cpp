#include <iostream>
#include <stdexcept>
using namespace std;

void test() {
    throw runtime_error("An error occurred"); // Throwing an exception
}

int main() {
    try {
        test();
    } catch (const runtime_error& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
