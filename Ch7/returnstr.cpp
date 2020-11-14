#include <iostream>

using namespace std;

char *buildstr(char, int);

int main() {
    int times;
    char ch;

    cout << "Enter character:";
    cin >> ch;
    cout << "Enter length:";
    cin >> times;
    char *str = buildstr(ch, times);
    cout << str << endl;
    delete [] str; // 释放内存空间
    return 0;
}

char *buildstr(char ch, int n) {
    char *p = new char[n + 1]; // 要创建包含n个字符的字符串，需要申请n+1个字符的空间
    for (int i = 0; i < n; i++) *(p + i) = ch;
    *(p + n) = '\0';
    return p;
}