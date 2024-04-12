#include <iostream>
#include <string>

int main() {
    std::cout << "Input a string: ";
    std::string str;
    std::getline(std::cin, str);
    std::cout << "Offset: ";
    int offset;
    std::cin >> offset;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 'a' + offset) % 26 + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] - 'A' + offset) % 26 + 'A';
        }
    }

    std::cout << "Encrypted: " << str << std::endl;
    return 0;
}