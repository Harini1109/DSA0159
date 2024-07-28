#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    long long Mobile_no;

    void getEmployeeDetails() {
        cout << "Enter Name of the Employee: ";
        cin.ignore();  // Ignore any newline characters left in the input buffer
        getline(cin, Emp_name);
        cout << "Enter Address of the Employee: ";
        getline(cin, Address);
        cout << "Enter ID of the Employee: ";
        cin >> Emp_id;
        cout << "Enter Mobile Number: ";
        cin >> Mobile_no;
        cout << "Enter E-Mail ID of the Employee: ";
        cin >> Mail_id;
    }

    void displayEmployeeDetails() {
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Address: " << Address << endl;
        cout << "Mobile Number: " << Mobile_no << endl;
        cout << "E-Mail ID: " << Mail_id << endl;
    }
};

class Programmer : public Employee {
public:
    double BP;

    void getProgrammerDetails() {
        getEmployeeDetails();
        cout << "Enter the Basic Pay of the Programmer: ";
        cin >> BP;
    }

    void generatePaySlip() {
        double DA = 0.97 * BP;
        double HRA = 0.10 * BP;
        double PF = 0.12 * BP;
        double staffClubFund = 0.001 * BP;
        double grossSalary = BP + DA + HRA;
        double netSalary = grossSalary - (PF + staffClubFund);

        displayEmployeeDetails();
        cout << "Basic Pay: " << BP << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "PF: " << PF << endl;
        cout << "Staff Club Fund: " << staffClubFund << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

class AssistantProfessor : public Employee {
public:
    double BP;

    void getAssistantProfessorDetails() {
        getEmployeeDetails();
        cout << "Enter the Basic Pay of the Assistant Professor: ";
        cin >> BP;
    }

    void generatePaySlip() {
        double DA = 0.97 * BP;
        double HRA = 0.10 * BP;
        double PF = 0.12 * BP;
        double staffClubFund = 0.001 * BP;
        double grossSalary = BP + DA + HRA;
        double netSalary = grossSalary - (PF + staffClubFund);

        displayEmployeeDetails();
        cout << "Basic Pay: " << BP << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "PF: " << PF << endl;
        cout << "Staff Club Fund: " << staffClubFund << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

class AssociateProfessor : public Employee {
public:
    double BP;

    void getAssociateProfessorDetails() {
        getEmployeeDetails();
        cout << "Enter the Basic Pay of the Associate Professor: ";
        cin >> BP;
    }

    void generatePaySlip() {
        double DA = 0.97 * BP;
        double HRA = 0.10 * BP;
        double PF = 0.12 * BP;
        double staffClubFund = 0.001 * BP;
        double grossSalary = BP + DA + HRA;
        double netSalary = grossSalary - (PF + staffClubFund);

        displayEmployeeDetails();
        cout << "Basic Pay: " << BP << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "PF: " << PF << endl;
        cout << "Staff Club Fund: " << staffClubFund << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

class Professor : public Employee {
public:
    double BP;

    void getProfessorDetails() {
        getEmployeeDetails();
        cout << "Enter the Basic Pay of the Professor: ";
        cin >> BP;
    }

    void generatePaySlip() {
        double DA = 0.97 * BP;
        double HRA = 0.10 * BP;
        double PF = 0.12 * BP;
        double staffClubFund = 0.001 * BP;
        double grossSalary = BP + DA + HRA;
        double netSalary = grossSalary - (PF + staffClubFund);

        displayEmployeeDetails();
        cout << "Basic Pay: " << BP << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "PF: " << PF << endl;
        cout << "Staff Club Fund: " << staffClubFund << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    int choice;
    cout << "Choose the type of Employee: \n";
    cout << "1. Programmer\n";
    cout << "2. Assistant Professor\n";
    cout << "3. Associate Professor\n";
    cout << "4. Professor\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            Programmer p;
            p.getProgrammerDetails();
            p.generatePaySlip();
            break;
        }
        case 2: {
            AssistantProfessor ap;
            ap.getAssistantProfessorDetails();
            ap.generatePaySlip();
            break;
        }
        case 3: {
            AssociateProfessor asp;
            asp.getAssociateProfessorDetails();
            asp.generatePaySlip();
            break;
        }
        case 4: {
            Professor prof;
            prof.getProfessorDetails();
            prof.generatePaySlip();
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
