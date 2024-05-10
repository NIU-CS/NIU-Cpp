#include <iomanip>
#include <iostream>

#include "head_math.h"

int main() {
    while (true) {
        double b, h, ub, lb, r;
        std::cout << "1) Parallelogram" << std::endl;
        std::cout << "2) Trapezoid" << std::endl;
        std::cout << "3) Periphery" << std::endl;
        std::cout << "4) Volume" << std::endl;
        std::cout << "5) Exit" << std::endl;
        std::cout << "Choice: ";
        int choice;
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Base, Height: ";
                std::cin >> b >> h;
                std::cout << std::fixed << std::setprecision(2)
                          << "Area of Para = " << PARA(b, h) << std::endl;
                break;
            case 2:
                std::cout << "Upper, Base, Height: ";
                std::cin >> ub >> lb >> h;
                std::cout << std::fixed << std::setprecision(2)
                          << "Area of Trapezoid = " << TRAPEZOID(ub, lb, h)
                          << std::endl;
                break;
            case 3:
                std::cout << "Radius: ";
                std::cin >> r;
                std::cout << std::fixed << std::setprecision(2)
                          << "Perimeter of Circle = " << PERIPHERY(r)
                          << std::endl;
                break;
            case 4:
                std::cout << "Radius: ";
                std::cin >> r;
                std::cout << std::fixed << std::setprecision(2)
                          << "Volume = " << VOLUME(r) << std::endl;
                break;
            case 5:
                return 0;
        }

        std::cout << std::endl;
    }

    return 0;
}