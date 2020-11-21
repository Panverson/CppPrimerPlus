#include <iostream>
#include "coordin.h"

using namespace std;

int main() {
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values:" ;
    while (cin >> rplace.x >> rplace.y) {
        pplace = rect2polar(rplace);
        show_polar(pplace);
        cout << "next 2 numbers (q to quit):";
    }
    cout << "Bye!" << endl;
    return 0;
}

