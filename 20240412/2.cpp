#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    int m, n, p;
    while (1) {
        std::cout << "Matrix Size(m,n,p): ";
        std::cin >> m >> n >> p;
        if (m > 0 && n > 0 && p > 0) break;
    }

    int A[m][n], B[n][p], C[m][p];
    std::cout << "A" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = gen() % 10;
            std::cout << A[i][j] << "\t";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl << "B" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            B[i][j] = gen() % 10;
            std::cout << B[i][j] << "\t";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl << "C=A*B" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }

            std::cout << C[i][j] << "\t";
        }

        std::cout << std::endl;
    }

    return 0;
}