#include <iostream>
#include <random>

void count(int *ptr) {
    int odd = 0, even = 0;
    for (int i = 0; i < 10; i++) {
        if (ptr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    std::cout << "Odd: " << odd << std::endl;
    std::cout << "Even: " << even << std::endl;
    return;
}

int main() {
    int n;
    std::cout << "Input range 0~N: ";
    std::cin >> n;
    int *ptr = new int[10];
    std::cout << "Random: " << std::endl;
    std::random_device rd;
    std::mt19937 gen(rd());
    for (int i = 0; i < 10; i++) {
        ptr[i] = gen() % (n + 1);
        std::cout << ptr[i] << "\t";
        if ((i+1) % 5 == 0) std::cout << std::endl;
    }

    count(ptr);
    return 0;
}