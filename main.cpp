#include <iostream>

int main() {
    std::string integral;
    std::string fraction;
    std::string wholeNumber;
    std::cout << "Enter the integral part of number: " << std::endl;
    std::cin >> integral;
    std::cout << "Enter the fractional part of number: " << std::endl;
    std::cin >> fraction;
    wholeNumber = integral + '.' + fraction;
    std::cout << std::stod(wholeNumber);
}
