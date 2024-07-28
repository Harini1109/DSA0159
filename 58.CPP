#include <iostream>
// Base class Animal class Animal { public:
virtual void eat() = 0; // Pure virtual function virtual ~Animal() {} // Virtual destructor
};
// Derived class Herbivore class Herbivore : public Animal { public:
void eat() override { std::cout << "Herbivore is eating plants." << std::endl;
}
};
// Derived class Carnivore class Carnivore : public Animal { public:
void eat() override {
std::cout << "Carnivore is eating meat." << std::endl;
}
};
int main() {
Animal* a1 = new Herbivore(); Animal* a2 = new Carnivore();
a1->eat(); // Output: Herbivore is eating plants. a2->eat(); // Output: Carnivore is eating meat.
delete a1; delete a2;
return 0;
}
