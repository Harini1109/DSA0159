#include <iostream>
class Counter { private:
int count;
public:
// Constructor
Counter() : count(0) {}
// Overload ++ operator (prefix)
Counter& operator++() {
++count; return *this;
}
// Overload ++ operator (postfix)
Counter operator++(int) {
Counter temp(*this); ++count; return temp;
}
// Getter function for count int getCount() const {
return count;
}
};
int main() {
Counter c1;
// Prefix increment ++c1; std::cout << "Count after prefix increment: " << c1.getCount() << std::endl; // Postfix increment Counter c2 = c1++; std::cout << "Count after postfix increment: " << c1.getCount() << std::endl; std::cout << "Count of c2 (postfix): " << c2.getCount() << std::endl;
return 0;
}
