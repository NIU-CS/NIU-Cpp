#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;
#define S 5
#define C 3
void getScore(int score[S][C]) {
    srand(time(NULL));
    for (int i = 0; i < S; i++)
        for (int j = 0; j < C; j++) score[i][j] = rand() % 101;
}

void getName(char **name) {
    for (int i = 0; i < S; i++) {
        cout << "Name of stu-" << i + 1 << ":";
        cin.getline(name[i], 15);
        for (int j = 0; name[i][j] != '\0'; j++)
            if (name[i][j] >= 'A' && name[i][j] <= 'Z') name[i][j] += 'a' - 'A';
    }
}

int main(void) {
    char **name = new char *[S];
    for (int i = 0; i < S; ++i) name[i] = new char[15];

    int score[S][C] = {};

    getName(name);
    getScore(score);
    cout << '\n' << fixed << setprecision(2);

    for (int i = 0, tmp; i < S; i++) {
        cout << left << setw(15) << name[i];
        for (int j = tmp = 0; j < C; tmp += score[i][j++])
            cout << '\t' << score[i][j];
        cout << '\t' << ">>" << (float)tmp / C << endl;
    }
    cout << setw(15) << "Average";
    for (int j = 0, tmp; j < C; j++) {
        for (int i = tmp = 0; i < S; i++) tmp += score[i][j];
        cout << '\t' << tmp / S;
    }
    cout << '\n';

    for (int i = 0; i < S; ++i) delete[] name[i];
    delete[] name;

    return 0;
}
