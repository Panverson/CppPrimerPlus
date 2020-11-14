#include <iostream>

template<typename T>
void Swap(T &a, T &b);

using namespace std;

int main() {
    int i=10, j=20;
    cout << "i = " << i << ", j = " << j << endl;
    Swap(i,j);
    cout << "i = " << i << ", j = " << j << endl;

    double x = 10.1, y = 20.2;
    cout << "x = " << x << ", y = " << y << endl;
    Swap(x,y);
    cout << "x = " << x << ", y = " << y << endl;

    string a = "Hello", b="world";
    cout << "a = " << a << ", b = " << b << endl;
    Swap(a,b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

template<typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}
