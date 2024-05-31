#include <iostream>

class C_rect {
private:
    int width;
    int height;
    double weight;

public:
    void set(int w, int h) {
        width = w;
        height = h;
    }
    void set(double wg) { weight = wg; }
    void set(double wg, int w, int h) {
        width = w;
        height = h;
        weight = wg;
    }
    void show() {
        std::cout << "width=" << width << ",height=" << height
             << ",weight=" << weight << '\n';
    }
};
int main() {
    int w, h;
    double wg;
    C_rect rect1;
    std::cout << "width:";
    std::cin >> w;
    std::cout << "height:";
    std::cin >> h;
    std::cout << "weight:";
    std::cin >> wg;
    rect1.set(wg);
    rect1.set(w, h);
    rect1.show();
    return 0;
}