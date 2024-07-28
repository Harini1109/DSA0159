#include <iostream>
class Number { private:
int value;
public:
// Constructor to initialize the number
Number(int v) : value(v) {}
// Overload the - operator to subtract two Number objects
Number operator-(const Number& other) const { return Number(value - other.value);
}
// Function to get the value of the number int get_value() const {
return value;
}
};
int main() {
Number num1(10);
Number num2(4);
// Use the overloaded - operator to subtract num2 from num1
Number result = num1 - num2;
std::cout << "Result of subtraction: " << result.get_value() << std::endl;
return 0;
}
