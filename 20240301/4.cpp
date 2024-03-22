#include <iostream>

int main() {
    // three numbers max and min
    int a, b, c;
    std::cout << "Please input three numbers: ";
    std::cin >> a >> b >> c;
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    std::cout << "The maximum number is " << max << std::endl;
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    std::cout << "The minimum number is " << min << std::endl;
    return 0;
}