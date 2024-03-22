#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int min=100, max=0;
    int sum = 0, n = 0;
    while (true) {
        int s;
        std::cout << "Score: ";
        std::cin >> s;
        if (s == -1) break;
        if (s < min) min = s;
        if (s > max) max = s;
        sum += s;
        n++;
    }

    double average = (double)sum / n;
    std::cout << std::fixed << std::setprecision(1) << "Average: " << average << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    return 0;
}