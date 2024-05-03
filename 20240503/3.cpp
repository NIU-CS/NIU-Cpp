/*
 b1243030 王晨洋
 Week10_exercise_3
 date:113/5/3
 */
#include <iostream>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double multi(double a, double b) { return a * b; }
double divi(double a, double b) { return a / b; }

int main() {
    double (*operations[])(double, double) = {add, sub, multi, divi};
    const char* symbols[] = {" + ", " - ", " * ", " / "};

    while (1) {
        std::cout << "Input two values: ";
        double a, b;
        std::cin >> a >> b;
        if (b == 0) break;

        std::cout << "1)add, 2)sub, 3)multi, 4)divi" << std::endl;
        int choice = 0;
        while (1) {
            std::cout << "Choice: ";
            std::cin >> choice;
            if (choice >= 1 && choice <= 4) {
                break;
            }
        }

        std::cout << a;
        double result = operations[choice - 1](a, b);
        std::cout << symbols[choice - 1] << b << " = " << result << std::endl << std::endl;
    }
}