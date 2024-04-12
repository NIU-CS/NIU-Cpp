#include <iostream>
#include <random>

void count(int[]) {
    int odd = 0, even = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
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
    int arr[10];
    std::cout << "Random: " << std::endl;
    for (int i = 1; i <= 10; i++) {
        arr[i] = rand() % n + 1;
        std::cout << arr[i] << "\t";
        if (i % 5 == 0) std::cout << std::endl;
    }

    count(arr);
    return 0;
}