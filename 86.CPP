#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    double mileage;

public:
    // Constructor
    Car(std::string carMake, std::string carModel, int carYear, double carMileage) 
        : make(carMake), model(carModel), year(carYear), mileage(carMileage) {
        std::cout << "Car constructor called for " << make << " " << model << std::endl;
    }

    // Destructor
    ~Car() {
        std::cout << "Car destructor called for " << make << " " << model << std::endl;
    }

    // Function to display car details
    void displayCarDetails() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Mileage: " << mileage << " miles" << std::endl;
    }

    // Function to drive the car (increases mileage)
    void drive(double miles) {
        if (miles > 0) {
            mileage += miles;
            std::cout << "Drove " << miles << " miles." << std::endl;
            std::cout << "New mileage: " << mileage << " miles" << std::endl;
        } else {
            std::cout << "Invalid mileage input!" << std::endl;
        }
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Corolla", 2015, 50000.0);

    // Display car details
    myCar.displayCarDetails();

    // Drive the car
    myCar.drive(150.0);

    // Display car details again
    myCar.displayCarDetails();

    // When the program ends, the destructor will be called automatically
    return 0;
}
