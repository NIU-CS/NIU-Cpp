/*
 * 王晨洋 B1243030
 * ex 5
 * 20240308
 */

#include <iostream>
#include <bitset>

int main() {
    int n;
    std::cout << "Decimal: ";
    while (true) {
        std::cin >> n;
        if (n < 0) {
            std::cout << "Invalid input, please enter the number >= 0. and < 255" << std::endl;
        } else {
            break;
        }
    }

    std::bitset<8> binary(n);
    for (int i=0; i<8; i++) {
        binary[i] = n % 2;
        n /= 2;
    }

    bool flag = false;
    std::cout << "Binary = ";
    for (int i=7; i>=0; i--) {
        if (binary[i] == 1) {
            flag = true;
        }

        if (flag) std::cout << binary[i];
    }

    return 0;
}