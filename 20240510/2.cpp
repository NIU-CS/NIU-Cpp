#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iomanip>

struct student {
    std::string name;
    int id;
    std::vector<int> score;
    double average;
};

int main() {
    std::vector<student> students(3);
    for (int i=0; i<3; i++) {
        std::cout << "ID: ";
        std::cin >> students[i].id;
        std::cout << "Name: ";
        std::getline(std::cin >> std::ws, students[i].name);
        std::random_device rd;
        std::mt19937 gen(rd());
        students[i].score.resize(3);
        for (int j=0; j<3; j++) {
            students[i].score[j] = gen() % 101;
            if (j == 2) {
                students[i].average += students[i].score[j] * 0.4;
            } else {
                students[i].average += students[i].score[j] * 0.3;
            }
        }
    }

    for (int i=0; i<3; i++) {
        std::cout << students[i].id << "\t" << students[i].name << std::setw(15) <<"\t";
        for (int j=0; j<3; j++) {
            std::cout << students[i].score[j] << "\t";
        }

        std::cout << std::fixed << std::setprecision(1) << ">>" << students[i].average << std::endl;
    }
    return 0;
}