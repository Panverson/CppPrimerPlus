#include <iostream>
#include <new>

using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int count(const char *str);

int main() {
    double *p1, *p2;
    int i;
    cout << "Calling new and placement new:" << endl;
    p1 = new double[N];
    p2 = new(buffer) double[N];
    for (i = 0; i < N; i++)
        p1[i] = p2[i] = 1000 + 20.0 * i;
    cout << "Memory address:\n" << "heap: " << p1
         << " static: " << (void *) buffer << endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++) {
        cout << p1[i] << " at " << &p1[i] << "; ";
        cout << p2[i] << " at " << &p2[i] << endl;
    }

    cout << "Calling new and placement new a second time:" << endl;
    double *p3,*p4;
    p3 = new double[N];
    p4 = new (buffer) double[N];
    for (i = 0; i < N; i++)
        p3[i] = p4[i] = 1000 + 20.0 * i;
    cout << "Memory address:\n" << "heap: " << p3
         << " static: " << (void *) buffer << endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++) {
        cout << p3[i] << " at " << &p3[i] << "; ";
        cout << p4[i] << " at " << &p4[i] << endl;
    }

    cout << "Calling new and placement new a third time:" << endl;
    delete [] p1;
    p1 = new double[N];
    p2 = new (buffer + N*sizeof(double)) double[N];
    for (i = 0; i < N; i++)
        p1[i] = p2[i] = 1000 + 20.0 * i;
    cout << "Memory address:\n" << "heap: " << p1
         << " static: " << (void *) buffer << endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++) {
        cout << p1[i] << " at " << &p1[i] << "; ";
        cout << p2[i] << " at " << &p2[i] << endl;
    }

    return 0;
}
