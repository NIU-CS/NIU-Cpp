#include <cstdlib>
#include <iostream>

int *myMax(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a = 10;
    int b = 20;
    std::cout << "before:\n";
    std::cout << "a=" << a << "\tb=" << b << std::endl;
    int *ptr = myMax(&a, &b);
    std::cout << *ptr << std::endl;
    return 0;
}