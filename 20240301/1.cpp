/*
 * 王晨洋 B1243030
 * ex 1
 * 20240301
 */

#include <iostream>

int main() {
    int n, m;
    std::cout << "Please input two numbers: ";
    std::cin >> n >> m;
    std::cout << n << "+" << m << "=" << n + m << std::endl;
    std::cout << n << "-" << m << "=" << n - m << std::endl;
    std::cout << n << "*" << m << "=" << n * m << std::endl;
    std::cout << n << "/" << m << "=" << n / m << std::endl;
    std::cout << n << "%" << m << "=" << n % m << std::endl;
    return 0;
}