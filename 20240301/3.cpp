/*
 * 王晨洋 B1243030
 * ex 3
 * 20240301
 */

#include <iostream>

int main() {
    // BMI
    double weight, height;
    std::cout << "Please input your weight (kg): ";
    std::cin >> weight;
    std::cout << "Please input your height (cm): ";
    std::cin >> height;
    height /= 100;
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