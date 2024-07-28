#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;
    double price;

public:
    // Constructor
    Book(std::string bookTitle, std::string bookAuthor, int pubYear, double bookPrice)
        : title(bookTitle), author(bookAuthor), publicationYear(pubYear), price(bookPrice) {
        std::cout << "Book constructor called for \"" << title << "\" by " << author << std::endl;
    }

    // Destructor
    ~Book() {
        std::cout << "Book destructor called for \"" << title << "\" by " << author << std::endl;
    }

    // Function to display book details
    void displayBookDetails() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << publicationYear << std::endl;
        std::cout << "Price: $" << price << std::endl;
    }

    // Function to update the price of the book
    void updatePrice(double newPrice) {
        if (newPrice > 0) {
            price = newPrice;
            std::cout << "New price for \"" << title << "\" is $" << price << std::endl;
        } else {
            std::cout << "Invalid price!" << std::endl;
        }
    }
};

int main() {
    // Create a Book object
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99);

    // Display book details
    myBook.displayBookDetails();

    // Update the price of the book
    myBook.updatePrice(12.99);

    // Display book details again
    myBook.displayBookDetails();

    // When the program ends, the destructor will be called automatically
    return 0;
}
