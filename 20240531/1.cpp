#include <iostream>

class C_box {
private:
    int length;
    int width;
    int height;

public:
    C_box(int l = 1, int w = 1, int h = 1) : length(l), width(w), height(h) {}
    int volume() { return length * width * height; }
    int surface_area() {
        return 2 * (length * width + width * height + height * length);
    }
};

int main() {
    int l, w, h;
    std::cout << "length:";
    std::cin >> l;
    std::cout << "width:";
    std::cin >> w;
    std::cout << "height:";
    std::cin >> h;
    C_box box1(l, w, h);
    std::cout << "volume:" << box1.volume() << '\n';
    std::cout << "surface:" << box1.surface_area() << '\n';
    return 0;
}