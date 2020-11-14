#include <iostream>


using namespace std;

const int SIZE = 8;

int sum_arr(int arr[], int n);

int main() {
    int cookies[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << "cookies address = " << cookies;
    cout << ", sizeof(cookies) = " << sizeof(cookies) << endl;
    cout << "Total cookies eaten = " << sum_arr(cookies, SIZE) << endl;
    cout << "First three eaters ate " << sum_arr(cookies, 3) << " cookies" << endl;
    cout << "Last four eaters ate " << sum_arr(cookies+4, 4) << " cookies" << endl;
    return 0;
}

int sum_arr(const int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}