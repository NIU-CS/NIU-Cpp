#include <iostream>

void Dec2Bin(int num, int *ptr) {
    for (int i = 0; i < 8; i++) {
        *ptr = num % 2;
        num /= 2;
        ptr++;
    }

    ptr -= 8;
    std::cout << std::endl;
    return;
}

void NmbBits(int *ptr) {
    int i = 0;
    for (int j = 7; j >= 0; j--) {
        if (ptr[j] == 1) {
            i++;
        }

        if (j == 3) std::cout << " ";
        std::cout << ptr[j];
    }

    std::cout << std::endl << "Number of bits 1 is " << i << std::endl;
    return;
}

int main() {
    int n;
    while (1) {
        std::cout << "Decimal number: ";
        std::cin >> n;
        if (n >= 0 && n <= 255) {
            break;
        }
    }

    int *ptr = new int[8];
    Dec2Bin(n, ptr);
    std::cout << "Binary of " << n << " is ";
    NmbBits(ptr);
    return 0;
}