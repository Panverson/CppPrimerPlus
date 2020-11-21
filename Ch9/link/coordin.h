//
// Created by HaoyuPan on 2020/11/20 0020.
//

#ifndef HELLOWORLD_COORDIN_H
#define HELLOWORLD_COORDIN_H

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

polar rect2polar(rect);
void show_polar(polar);


#endif //HELLOWORLD_COORDIN_H