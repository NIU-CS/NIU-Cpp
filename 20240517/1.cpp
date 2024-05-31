#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>

int main() {
    std::cout << "N: ";
    int n;
    std::cin >> n;
    std::cout << "Success to write a file." << std::endl;
    std::ofstream fout("rand.txt");
    std::random_device rd;
    std::mt19937 gen(rd());
    std::cout << "Random:" << std::endl;
    double sum = 0;
    for (int i = 0; i < 50; i++) {
        int x = (gen() % n) + 1;
        fout << x << std::endl;
        std::cout << x << "\t";
        sum += x;
        if (i % 10 == 9) std::cout << std::endl;
    }
    fout.close();
    sum /= 50;
    std::cout << std::fixed << std::setprecision(1) << "average: " << sum
              << std::endl;
    return 0;
}