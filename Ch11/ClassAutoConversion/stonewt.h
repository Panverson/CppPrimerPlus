//
// Created by HaoyuPan on 2021/1/18 0018.
//

#ifndef STONE_STONEWT_H
#define STONE_STONEWT_H

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};

#endif //STONE_STONEWT_H
