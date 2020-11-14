#include <iostream>

using namespace std;

const int mins_per_hour = 60;

struct time {
    int hours;
    int mins;
};

time time_sum(time, time);

void show_time(time);

int main() {
    time today = {2,30};
    time tomorrow = {4,45};
    time sum = time_sum(today, tomorrow);
    show_time(sum);
    return 0;
}

time time_sum(time t1, time t2) {
    time total;
    total.mins = (t1.mins + t2.mins) % mins_per_hour;
    total.hours = (t1.mins + t2.mins) / mins_per_hour + t1.hours + t2.hours;
    return total;
}

void show_time(time t) {
    cout << t.hours << " hours, ";
    cout << t.mins << " mins." << endl;
}