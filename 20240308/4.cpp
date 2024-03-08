/*
 * 王晨洋 B1243030
 * ex 4
 * 20240308
 */

#include <iostream>
#include <vector>

int main() {
    double min=100, max=0;
    std::vector<double> score;
    while (true) {
        double s;
        std::cout << "Score: ";
        std::cin >> s;
        if (s == -1) break;
        if (s < min) min = s;
        if (s > max) max = s;
        score.push_back(s);
    }

    int sum = 0;
    for (int i=0; i<score.size(); i++) {
        sum += score[i];
    }

    std::cout << "Average: " << sum / score.size() << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    return 0;
}