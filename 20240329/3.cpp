#include <iomanip>
#include <iostream>

#define PI 3.1415926

#define VOLUMN(a, b, c) (a * b * c)

int main() {
    while (true) {
        std::cout << "redius (r): ";
        double r;
        std::cin >> r;
        if (r <= 0) {
            break;
        }

        std::cout << std::fixed << std::setprecision(3)
                  << "Volumn = " << VOLUMN(4.0 / 3.0, PI, r * r * r)
                  << std::endl;
    }

    return 0;
}