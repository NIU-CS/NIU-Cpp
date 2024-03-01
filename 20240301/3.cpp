#include <iostream>

int main() {
    // BMI
    double weight, height;
    std::cout << "Please input your weight (kg): ";
    std::cin >> weight;
    std::cout << "Please input your height (m): ";
    std::cin >> height;
    double bmi = weight / (height * height);
    std::cout << "Your BMI is " << bmi << std::endl;
}