#include <iostream>

double area(double height) {
    return height * height;
}

double area(double height, double weight) {
    return height * weight;
}

int main() {
    while (true) {
        std::cout << "Input weight, height: ";
        double weight, height;
        std::cin >> weight >> height;
        if (weight <= 0 || height <= 0) {
            break;
        }

        if (weight == height) {
            std::cout << "Area = " << area(height) << std::endl;
        } else {
            std::cout << "Area = " << area(height, weight) << std::endl;
        }
    }

    return 0;
}