#include <iostream>
#include <exception>

using namespace std;

class Resource {
public:
    Resource() {
        cout << "Resource acquired." << endl;
    }
    ~Resource() {
        cout << "Resource released." << endl;
    }
};

void functionWithException() {
    Resource res;
    throw runtime_error("An error occurred");
}

int main() {
    try {
        functionWithException();
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
