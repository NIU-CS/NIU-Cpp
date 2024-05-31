#include <iostream>
#include <vector>

struct day {
    int year;
    int month;
    int day;
};

int main() {
    std::vector<int> valid_days = {0,  31, 29, 31, 30, 31,
                                   30, 31, 31, 30, 31, 30};

    day d;
    while (1) {
        std::cout << "year: ";
        std::cin >> d.year;
        std::cout << "Month: ";
        std::cin >> d.month;
        std::cout << "Day: ";
        std::cin >> d.day;
        if (d.year < 0 || d.month < 0 || d.month > 12 || d.day < 0 ||
            d.day > valid_days[d.month]) {
            std::cout << "Input Error!!" << std::endl;
            break;
        }

        if (d.month < 10) {
            std::cout << "0";
        }

        std::cout << d.month << "/";
        if (d.day < 10) {
            std::cout << "0";
        }

        std::cout << d.day << "/";

        if (d.year < 10) {
            std::cout << "000";
        } else if (d.year < 100) {
            std::cout << "00";
        } else if (d.year < 1000) {
            std::cout << "0";
        }

        std::cout << d.year << std::endl << std::endl;
    }

    return 0;
}