//
// Created by HaoyuPan on 2020/11/20 0020.
//

#include "coordin.h"
#include <iostream>
#include <cmath>

polar rect2polar(rect a) {
    using namespace std;
    polar res;
    res.distance = sqrt(a.x * a.x + a.y * a.y);
    res.angle = atan2(a.y, a.x);
    return res;
}

void show_polar(polar a) {
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << a.distance;
    cout << ", angle = " << a.angle*Rad_to_deg << " degrees";
    cout << endl;
}
