#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "My custom exception occurred";
    }
};

void functionThatThrows() {
    throw MyException();
}

int main() {
    try {
        functionThatThrows();
    } catch (const MyException& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
