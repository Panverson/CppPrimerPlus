#include <iostream>

using namespace std;

int sum_arr1(int (*arr)[4], int size);

int sum_arr2(int arr[][4], int size);

int main() {
    int data[3][4] = {{1, 2,  3,  4},
                      {5, 6,  7,  8},
                      {9, 10, 11, 12}};
    int sum1 = sum_arr1(data, 3);
    int sum2 = sum_arr2(data, 3);
    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum1 << endl;
    return 0;
}

int sum_arr1(int (*arr)[4], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++)
            sum += arr[i][j];
    }
    return sum;
}

int sum_arr2(int arr[][4], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++)
            sum += arr[i][j];
    }
    return sum;
}