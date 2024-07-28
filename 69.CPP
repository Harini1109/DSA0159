#include <iostream> #include <string>
class Person { private: std::string name; int age;
public:
Person(std::string n, int a) : name(n), age(a) {}
// Overload the << operator friend std::ostream& operator<<(std::ostream& os, const Person& p);
};
// Define the overloaded << operator std::ostream& operator<<(std::ostream& os, const Person& p) {
os << "Name: " << p.name << ", Age: " << p.age; return os;
}
int main() {
Person person("Alice", 30);
// Use the overloaded << operator to print the contents of the person object std::cout << person << std::endl;
return 0;
}
