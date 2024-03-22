#include <iostream>

int main() {
    std::cout << "1: Celsius to Fahrenheit" << std::endl;
    std::cout << "2: Fahrenheit to Celsius" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1) {
        double celsius;
        std::cout << "Please input the temperature in Celsius: ";
        std::cin >> celsius;
        std::cout << celsius << " degrees Celsius is " << celsius * 9 / 5 + 32 << " degrees Fahrenheit." << std::endl;
    } else if (choice == 2) {
        double fahrenheit;
        std::cout << "Please input the temperature in Fahrenheit: ";
        std::cin >> fahrenheit;
        std::cout << fahrenheit << " degrees Fahrenheit is " << (fahrenheit - 32) * 5 / 9 << " degrees Celsius." << std::endl;
    } else {
        std::cout << "Invalid choice." << std::endl;
    }
}