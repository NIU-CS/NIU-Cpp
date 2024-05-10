#include <iostream>
#include <vector>

int main() {
    int year, month, day;
    std::vector<int> valid_days = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    while (1) {
        std::cout << "year: ";
        std::cin >> year;
        std::cout << "Month: ";
        std::cin >> month;
        std::cout << "Day: ";
        std::cin >> day;
        if (year < 0 || month < 0 || month > 12 || day < 0 || day > valid_days[month]) {
            std::cout << "Input Error!!" << std::endl;
            break;
        }

        std::cout << month << "/" << day << "/" << year << std::endl << std::endl;
    }

    return 0;
}