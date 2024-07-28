#include <iostream>
#include <exception>

using namespace std;

void function() {
    throw out_of_range("Out of range error");
}

int main() {
    try {
        function();
    } catch (const out_of_range& e) {
        cout << "Caught exception: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Caught general exception: " << e.what() << endl;
    }
    return 0;
}
