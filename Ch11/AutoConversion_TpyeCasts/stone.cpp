#include <iostream>

using std::cout;

#include "stonewt.h"

void display(const Stonewt &st, int n);

int main() {

    cout << "========================= Automatic Conversions =========================\n";
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    incognito.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The president weighed ";
    taft.show_lbs();
    incognito = 276.8;  //use constructor for conversion
    taft = 325;
    cout << "After dinner, the celebrity weighed ";
    incognito.show_stn();
    cout << "After dinner, the detective weighed ";
    wolfe.show_lbs();
    display(taft, 2);
    cout << "The wrestler weighed even more\n";
    display(422, 2);
    cout << "No stone left unearned\n";

    cout << "========================= Type casts =========================\n";
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";
    return 0;
}

void display(const Stonewt &st, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Wow! ";
        st.show_stn();
    }
}
