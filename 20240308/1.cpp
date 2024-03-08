/*
 * 王晨洋 B1243030
 * ex 1
 * 20240308
 */

#include <iostream>

int main() {
    std::cout << "Input an integer: ";
    int n;
    std::cin >> n;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    std::cout << n << "! = ";
    std::cout << result << std::endl;
    return 0;
}