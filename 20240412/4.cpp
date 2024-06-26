#include <algorithm>
#include <iostream>
#include <random>
#include <set>

int main() {
    int guess_count = 0;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::string digits = "0123456789";
    std::shuffle(digits.begin(), digits.end(), gen);

    int n = std::stoi(digits.substr(0, 4));

    while (n < 1234 || n > 9876) {
        std::shuffle(digits.begin(), digits.end(), gen);
        n = std::stoi(digits.substr(0, 4));
    }

    std::cout << "Right answer: " << n << std::endl;

    int guess;
    // 0A0B ~ 4A0B
    while (1) {
        std::cout << "input an integer(1234~9876): ";
        std::cin >> guess;
        if (guess >= 1234 && guess <= 9876) {
            int a = guess / 1000;
            int b = guess / 100 % 10;
            int c = guess / 10 % 10;
            int d = guess % 10;
            if (a != b && a != c && a != d && b != c && b != d && c != d) {
                int A = 0, B = 0;
                if (a == n / 1000) A++;
                if (b == n / 100 % 10) A++;
                if (c == n / 10 % 10) A++;
                if (d == n % 10) A++;
                if (a == n / 100 % 10 || a == n / 10 % 10 || a == n % 10) B++;
                if (b == n / 1000 || b == n / 10 % 10 || b == n % 10) B++;
                if (c == n / 1000 || c == n / 100 % 10 || c == n % 10) B++;
                if (d == n / 1000 || d == n / 100 % 10 || d == n / 10 % 10) B++;
                std::cout << A << "A" << B << "B" << std::endl;
                guess_count++;
                if (A == 4) break;
            }
        } else
            continue;
    }

    std::cout << "Correct! Total count = " << guess_count << std::endl;
    return 0;
}