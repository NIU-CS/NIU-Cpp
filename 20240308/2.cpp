/*
 * 王晨洋 B1243030
 * ex 2
 * 20240308
 */

#include <iostream>
#include <iomanip>

int main() {
    int n;
    double p, r;
    std::cout << "Enter p, r, n: \n";
    std::cin >> p >> r >> n;
    std::cout << "year\t" << "Amount\t" << std::endl;
    for (int i=0; i<n; i++) {
        p *= (1+r);
        std::cout << std::fixed << std::setprecision(2) << i+1 << "\t" << p << "\t" << std::endl;
    }

    return 0;
}