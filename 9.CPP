#include <iostream>
#include <cmath> 
int main() {
double num;
 std::cout << "Enter a floating-point number: "; 
 std::cin >> num;
 int rounded_floor = static_cast<int>(std::floor(num)); 
  int rounded_ceil = static_cast<int>(std::ceil(num));	
std::cout << "Original number: " << num << std::endl;
 std::cout << "Rounded down (floor): " << rounded_floor << std::endl; std::cout << "Rounded up (ceil): " << rounded_ceil << std::endl;
return 0;
}
