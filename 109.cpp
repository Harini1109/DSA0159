#include <iostream>
#include <exception>

using namespace std;

void function() {
    throw runtime_error("Runtime error occurred");
}

int main() {
    try {
        function();
    } catch (const runtime_error& e) {
        cout << "Caught runtime_error: " << e.what() << endl;
    } catch (const out_of_range& e) {
        cout << "Caught out_of_range: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Caught general exception: " << e.what() << endl;
    }
    return 0;
}
