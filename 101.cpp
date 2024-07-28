#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculatePay() = 0; // Pure virtual function
};

class Manager : public Employee {
private:
    double salary;
public:
    Manager(double s) : salary(s) {}

    void calculatePay() override {
        cout << "Manager's salary: " << salary << endl;
    }
};

class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    void calculatePay() override {
        cout << "Engineer’s pay: " << hourlyRate * hoursWorked << endl;
    }
};

int main() {
    Employee* ptr;

    Manager mgr(80000);
    Engineer eng(50, 160);

    ptr = &mgr;
    ptr->calculatePay(); // Calls Manager's calculatePay()

    ptr = &eng;
    ptr->calculatePay(); // Calls Engineer's calculatePay()

    return 0;
}
