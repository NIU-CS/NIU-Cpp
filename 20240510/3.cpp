#include <iostream>

struct my_time {
    int hour;
    int minute;
    double second;
};

my_time minus(my_time t1, my_time t2) {
    my_time duration;

    if (t1.hour < t2.hour || (t1.hour == t2.hour && t1.minute < t2.minute) || (t1.hour == t2.hour && t1.minute == t2.minute && t1.second < t2.second)) {
        std::swap(t1, t2);
    }

    duration.hour = t1.hour - t2.hour;
    duration.minute = t1.minute - t2.minute;
    duration.second = t1.second - t2.second;
    if (duration.second < 0) {
        duration.second += 60;
        duration.minute--;
    }

    if (duration.minute < 0) {
        duration.minute += 60;
        duration.hour--;
    }

    return duration;
}

int main() {
    my_time t[2];
    for (int i=0; i<2; i++) {
        std::cout << "Time" << i+1 << ": ";
        std::cin >> t[i].hour >> t[i].minute >> t[i].second;
    }

    my_time duration = minus(t[0], t[1]);

    if (t[0].hour < 10) {
        std::cout << "0";
    }

    std::cout << t[0].hour << ":" << t[0].minute << ":" << t[0].second << std::endl;
    if (t[1].hour < 10) {
        std::cout << "0";
    }

    std::cout << t[1].hour << ":" << t[1].minute << ":" << t[1].second << std::endl;
    if (duration.hour < 10) {
        std::cout << "0";
    }

    std::cout << duration.hour << ":" << duration.minute << ":" << duration.second << std::endl;
    return 0;
}