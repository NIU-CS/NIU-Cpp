#include <cstdlib>
#include <iostream>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {
    int a = 10;
    int b = 20;
    std::cout << "before:\n";
    std::cout << "a=" << a << "\tb=" << b << std::endl;
    swap(&a, &b);
    std::cout << "after:\n";
    std::cout << "a=" << a << "\tb=" << b << std::endl;
    return 0;
}