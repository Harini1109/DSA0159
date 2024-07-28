#include <iostream> #include <string>
class Person { private: std::string name; int age;
public:
Person(std::string n, int a) : name(n), age(a) {}
// Overload the == operator bool operator==(const Person& other) const {
return (name == other.name && age == other.age);
}
};
int main() {
Person person1("Alice", 30);
Person person2("Alice", 30);
Person person3("Bob", 25);
// Use the overloaded == operator to compare person objects if (person1 == person2) {
std::cout << "person1 and person2 are equal." << std::endl;
} else { std::cout << "person1 and person2 are not equal." << std::endl;
}
if (person1 == person3) {
std::cout << "person1 and person3 are equal." << std::endl;
} else { std::cout << "person1 and person3 are not equal." << std::endl;
}
return 0;
}
