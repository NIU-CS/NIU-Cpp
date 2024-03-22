#include <iostream>

bool is_prime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int n_prime(int x, int y) {
    int ans = 0;
    if (x > y) std::swap(x, y);
    for (int i=x; i<=y; i++) {
        if (is_prime(i)) ans++;
    }

    return ans;
}

int main() {
    int a, b;
    while (1) {
        std::cout << "two values: ";
        std::cin >> a >> b;
        if (a >= 2 && b >= 2) break;
    }

    std::cout << a << "~" << b << ": has " << n_prime(a, b) << " prime values";
    return 0;
}
