#include <iostream>
#include <cmath>

int main() {
    int p, n;
    double r;
    std::cout << "Please input the principal amount: ";
    std::cin >> p;
    std::cout << "Please input the number of years: ";
    std::cin >> n;
    std::cout << "Please input the rate of interest: ";
    std::cin >> r;
    // total amout = a = p(1+r)^m
    std::cout << "The total amount is " << p * pow(1 + r, n) << std::endl;
    return 0;
}