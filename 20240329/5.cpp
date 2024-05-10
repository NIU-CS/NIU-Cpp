#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> board = {{1, 0, 0, 1, 1},
                                           {0, 1, 0, 1, 0},
                                           {1, 0, 1, 0, 1},
                                           {0, 0, 0, 1, 0},
                                           {0, 1, 1, 1, 0}};

    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            if (board[x][y] == 1) {
                std::cout << 0 << " ";
                continue;
            }

            int count = 0;
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    if (x + i < 0 || x + i >= 5 || y + j < 0 || y + j >= 5) {
                        continue;
                    }

                    if (board[x + i][y + j] == 1) {
                        count++;
                    }
                }
            }

            std::cout << count << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}