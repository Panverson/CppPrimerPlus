#include <iostream>

using namespace std;

int cube(const int &a);

int main() {
    long a = 3;
    cout << "Unmatched type cube(a) = "  << cube(a) << endl;
    cout << "Unchangeable value cube(3) = " << cube(3) << endl;
    return 0;
}

int cube(const int &a) {
    return a * a * a;
}
