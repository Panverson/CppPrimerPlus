//
// Created by HaoyuPan on 2020/11/23 0023.
//

#ifndef CLASS_STOCK00_H
#define CLASS_STOCK00_H

#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() {
        total_val = shares * share_val;
    }

public:
    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

#endif //CLASS_STOCK00_H
