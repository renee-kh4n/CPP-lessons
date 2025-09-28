#include <iostream>
#include <iomanip>  // For std::setprecision

int main() {
    float f = 1.23456789f;      // Note the 'f' suffix for float
    double d = 1.23456789;

    std::cout << std::fixed << std::setprecision(8);  // Show 9 digits after decimal

    std::cout << "Float value : " << f << std::endl;
    std::cout << "Double value: " << d << std::endl;

    return 0;
}
