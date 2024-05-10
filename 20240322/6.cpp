#include <iomanip>
#include <iostream>

double bounce_height(double height) {
    if (height < 1) return 0;
    return height + bounce_height(height / 2);
}

int main() {
    double n;
    while (1) {
        std::cout << "Input N: ";
        std::cin >> n;
        if (n <= 0) break;

        std::cout << std::fixed << std::setprecision(2)
                  << "Output: " << bounce_height(n) << std::endl;
    }

    return 0;
}
