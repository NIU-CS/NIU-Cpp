#include <iostream>

struct my_time {
    int hour;
    int minute;
    double second;
};

void mius(my_time t[2]) {
    my_time duration;

    if (t[0].hour < t[1].hour ||
        (t[0].hour == t[1].hour && t[0].minute < t[1].minute) ||
        (t[0].hour == t[1].hour && t[0].minute == t[1].minute &&
         t[0].second < t[1].second)) {
        std::swap(t[0], t[1]);
    }

    duration.hour = t[0].hour - t[1].hour;
    duration.minute = t[0].minute - t[1].minute;
    duration.second = t[0].second - t[1].second;
    if (duration.second < 0) {
        duration.second += 60;
        duration.minute--;
    }

    if (duration.minute < 0) {
        duration.minute += 60;
        duration.hour--;
    }

    if (t[0].hour < 10) {
        std::cout << "0";
    }

    std::cout << t[0].hour << ":" << t[0].minute << ":" << t[0].second
              << std::endl;
    if (t[1].hour < 10) {
        std::cout << "0";
    }

    std::cout << t[1].hour << ":" << t[1].minute << ":" << t[1].second
              << std::endl;
    if (duration.hour < 10) {
        std::cout << "0";
    }

    std::cout << duration.hour << ":" << duration.minute << ":"
              << duration.second << std::endl;
    return;
}

int main() {
    my_time t[2];
    for (int i = 0; i < 2; i++) {
        std::cout << "Time" << i + 1 << ": ";
        std::cin >> t[i].hour >> t[i].minute >> t[i].second;
    }

    mius(t);
    return 0;
}