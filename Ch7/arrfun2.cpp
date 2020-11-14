#include <iostream>


using namespace std;

const int SIZE = 8;

int sum_arr(const int *, const int *);

int main() {
    int cookies[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << "Total cookies eaten = " << sum_arr(cookies, cookies + SIZE) << endl;
    cout << "First three eaters ate " << sum_arr(cookies, &cookies[3]) << " cookies" << endl;
    cout << "Last four eaters ate " << sum_arr(cookies + 4, cookies + 8) << " cookies" << endl;
    return 0;
}

int sum_arr(const int *begin, const int *end) {
    const int *p; // const修饰p表示p指向的数组不能被修改而不是p不能被修改
    int sum = 0;
    for (p = begin; p != end; p++)
        sum += *p;
    return sum;
}