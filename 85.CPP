#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(std::string name, int number, double initialBalance) 
        : accountHolderName(name), accountNumber(number), balance(initialBalance) {
        std::cout << "BankAccount constructor called for " << accountHolderName << std::endl;
    }

    // Destructor
    ~BankAccount() {
        std::cout << "BankAccount destructor called for " << accountHolderName << std::endl;
    }

    // Function to display account details
    void displayAccountDetails() {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
            std::cout << "New Balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount!" << std::endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << std::endl;
            std::cout << "New Balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds!" << std::endl;
        }
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account("John Doe", 123456, 500.0);

    // Display account details
    account.displayAccountDetails();

    // Deposit money
    account.deposit(150.0);

    // Withdraw money
    account.withdraw(100.0);

    // Display account details again
    account.displayAccountDetails();

    // When the program ends, the destructor will be called automatically
    return 0;
}
