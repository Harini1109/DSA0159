#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "Rectangle constructor called. Length: " << length << ", Width: " << width << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle destructor called. Length: " << length << ", Width: " << width << std::endl;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Function to display rectangle details
    void displayDetails() {
        std::cout << "Length: " << length << std::endl;
        std::cout << "Width: " << width << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
        std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect(10.0, 5.0);

    // Display rectangle details
    rect.displayDetails();

    // When the program ends, the destructor will be called automatically
    return 0;
}
