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
    if (bmi < 18.5) {
        std::cout << "You are underweight." << std::endl;
    } else if (bmi < 24) {
        std::cout << "You are normal." << std::endl;
    } else if (bmi < 28) {
        std::cout << "You are overweight." << std::endl;
    } else {
        std::cout << "You are obese." << std::endl;
    }
}