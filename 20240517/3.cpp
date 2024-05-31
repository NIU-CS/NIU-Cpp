#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <vector>

std::ofstream fout("data.bin", std::ios::binary);
std::ifstream fin("data.bin", std::ios::binary);

struct student {
    std::string name;
    int id;
    std::vector<int> score;
    double semester_score;
};

int main() {
    std::vector<student> students(3);
    for (int i = 0; i < 3; i++) {
        std::cout << "ID: ";
        std::cin >> students[i].id;
        std::cout << "Name: ";
        std::getline(std::cin >> std::ws, students[i].name);
        std::random_device rd;
        std::mt19937 gen(rd());
        students[i].score.resize(3);
        fout.write((char*)&students[i].id, sizeof(students[i].id));
        fout.write(students[i].name.c_str(), students[i].name.size());
        fout.put('\0');
        double average = 0;
        for (int j = 0; j < 3; j++) {
            students[i].score[j] = gen() % 101;
            if (j == 2) {
                average += students[i].score[j] * 0.4;
            } else {
                average += students[i].score[j] * 0.3;
            }
            fout.write((char*)&students[i].score[j],
                       sizeof(students[i].score[j]));
        }
        students[i].semester_score = average;
        fout.write((char*)&students[i].semester_score,
                   sizeof(students[i].semester_score));
    }

    fout.close();

    std::cout << "Read the file: " << std::endl;
    std::vector<student> read_students(3);
    for (int i = 0; i < 3; i++) {
        fin.read((char*)&read_students[i].id, sizeof(read_students[i].id));
        std::getline(fin, read_students[i].name, '\0');
        std::cout << std::setw(5) << read_students[i].id << " " << std::setw(5)
                  << read_students[i].name;
        read_students[i].score.resize(3);
        for (int j = 0; j < 3; j++) {
            fin.read((char*)&read_students[i].score[j],
                     sizeof(read_students[i].score[j]));
            std::cout << "\t" << std::setw(5) << read_students[i].score[j];
        }
        fin.read((char*)&read_students[i].semester_score,
                 sizeof(read_students[i].semester_score));
        std::cout << "\t>>" << read_students[i].semester_score << std::endl;
    }
    return 0;
}