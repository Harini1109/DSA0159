#include <iostream> using namespace std;
// Function to convert Celsius to Fahrenheit double celsiusToFahrenheit(double celsius) {
return (celsius * 9.0 / 5.0) + 32.0;
}
// Function to convert Fahrenheit to Celsius double fahrenheitToCelsius(double fahrenheit) {
return (fahrenheit - 32.0) * 5.0 / 9.0;
}
int main() { double temperature; int choice;
cout << "Enter temperature: "; cin >> temperature;
cout << "Choose conversion:" << endl; cout << "1. Celsius to Fahrenheit" << endl; cout << "2. Fahrenheit to Celsius" << endl; cout << "Enter your choice (1 or 2): "; cin >> choice;
switch (choice) {
case 1:
cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature)
<< " Fahrenheit." << endl; break;
case 2:
cout << temperature << " Fahrenheit is " <<
fahrenheitToCelsius(temperature) << " Celsius." << endl; break;
default:
cout << "Invalid choice! Please enter 1 or 2." << endl;
}
return 0;
}
