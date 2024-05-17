#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    std::cout << "File name: ";
    std::filesystem::path path;
    std::cin >> path;
    std::cout << "Success to read a file." << std::endl;
    std::ifstream fin(path);
    char c;
    int num_eng = 0;
    while (fin >> c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) num_eng++;
        if (c == 'a' || c == 'A') a++;
        if (c == 'e' || c == 'E') e++;
        if (c == 'i' || c == 'I') i++;
        if (c == 'o' || c == 'O') o++;
        if (c == 'u' || c == 'U') u++;
    }

    fin.close();
    std::cout << "Total English: " << num_eng << std::endl;
    std::cout << "a: " << a << " e: " << e << " i: " << i << " o: " << o << " u: " << u << std::endl;
    return 0;
}