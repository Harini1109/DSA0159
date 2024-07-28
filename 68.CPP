#include <iostream> using namespace std;
// Define a class with the overloaded + operator class Addable { private:
int value;
public:
// Constructor to initialize the value
Addable(int v) : value(v) {}
// Getter to access the value int getValue() const { return value; }
// Overload the + operator
Addable operator+(const Addable& other) { return Addable(this->value + other.value);
}
};
int main() {
Addable a(5);
Addable b(10);
Addable c = a + b; // Use overloaded + operator cout << "The sum of a and b is: " << c.getValue() << endl;
return 0;
}
