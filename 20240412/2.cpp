#include <iostream>

/*
 * C_{m*p} = A_{m*n} * B_{n*p}
 */

int main() {
    int m, n, p;
    while (1) {
        std::cout << "Matrix Size(m,n,p): ";
        std::cin >> m >> n >> p;
        if (m > 0 && n > 0 && p > 0) break;
    }

    int A[m][n], B[n][p], C[m][p];
    // use ramdom fill and print A and B
    std::cout << "A" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 10;
            std::cout << A[i][j] << "\t";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl << "B" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            B[i][j] = rand() % 10;
            std::cout << A[i][j] << "\t";
        }

        std::cout << std::endl;
    }

    // calculate C
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