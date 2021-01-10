#include <iostream>
using namespace std;

const int SIZE = 10;

int count(const char * str);

int main() {
    char a[] = "Hello";
    char b[] = "World";
    cout<< "a[] has "<< count(a) << " characters.\n";
    cout<< "a[] and b[] total have "<< count(b) << " characters.\n";
    return 0;
}

int count(const char * str) {
    static int total = 0;
    int cnt = 0;
    while (*str++)
        cnt ++;
    total += cnt;
    return total;
}