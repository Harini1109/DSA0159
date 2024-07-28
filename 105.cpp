#include <iostream>
#include <exception>

using namespace std;

void function() {
    try {
        throw runtime_error("Exception in function()");
    } catch (const runtime_error& e) {
        cout << "Caught in function(): " << e.what() << endl;
        throw; // Re-throwing the exception
    }
}

int main() {
    try {
        try {
            function();
        } catch (const runtime_error& e) {
            cout << "Caught in main(): " << e.what() << endl;
        }
    } catch (...) {
        cout << "Caught unknown exception" << endl;
    }
    return 0;
}
