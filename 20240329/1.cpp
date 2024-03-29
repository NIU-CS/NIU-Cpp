#include <iostream>

void gcd(int a, int b, int& g) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }

    g = a;
}

int main() {
    // gcd(a, b)
    while (true) {
        std::cout << "Input two values: ";
        int a, b, g;
        std::cin >> a >> b;
        if (a <= 0 || b <= 0) {
            break;
        }

        gcd(a, b, g);
        std::cout << "GCD(" << a << ", " << b << ") = " << g << std::endl;
    }

    return 0;
}