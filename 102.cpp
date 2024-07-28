#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat says meow" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog says bark" << endl;
    }
};

int main() {
    Animal* ptr;

    Cat cat;
    Dog dog;

    ptr = &cat;
    ptr->speak(); // Calls Cat's speak()

    ptr = &dog;
    ptr->speak(); // Calls Dog's speak()

    return 0;
}
