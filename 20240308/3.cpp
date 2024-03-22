#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cout << "Enter n: \n";
    std::cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<10; j++) {
            std::cout << i << " * " << j << " = " << i * j << std::setw(3) << "  ";
            if (i*j < 10) std::cout << " ";
        }

        std::cout << std::endl;
    }
    return 0;
}