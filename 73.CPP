#include <iostream> #include <string>
class Callable { public:
// Overload the () operator to accept arguments void operator()(const std::string& message, int times) const {
for (int i = 0; i < times; ++i) {
std::cout << message << std::endl;
}
}
};
int main() {
Callable callable;
// Use the overloaded () operator to call the callable object with arguments callable("Hello, world!", 3);
return 0;
}
