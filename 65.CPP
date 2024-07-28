#include <iostream> #include <string>
// Base class Animal
class Animal { public:
virtual void speak() = 0; // Pure virtual function virtual ~Animal() {} // Virtual destructor
};
// Derived class Cat class Cat : public Animal { public:
void speak() override {
std::cout << "Cat says: Meow!" << std::endl;
}
};
// Derived class Dog class Dog : public Animal { public:
void speak() override {
std::cout << "Dog says: Woof!" << std::endl;
}
};
int main() {
Animal* a1 = new Cat(); Animal* a2 = new Dog();
a1->speak(); // Output: Cat says: Meow! a2->speak(); // Output: Dog says: Woof!
delete a1; delete a2;
return 0;
}
