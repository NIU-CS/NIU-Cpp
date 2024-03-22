#include <iostream>

int cat_height(int height) {
    if (height < 1) return 0;
    return height + cat_height(height / 2) + cat_height(height / 3) + cat_height(height / 4);
}

int main() {
    int height;
    while (1) {
        std::cout << "Input height: ";
        std::cin >> height;
        if (height <= 0) break;

        std::cout << "Output: " << cat_height(height) << std::endl;
    }

    return 0;
}
