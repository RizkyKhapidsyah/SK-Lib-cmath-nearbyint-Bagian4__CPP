#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

using namespace std;

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double x = 11.87, hasil;
    hasil = nearbyint(x);
    cout << "Rounding to-nearest (" << x << ") = " << hasil << endl;

    x = 11.5;
    hasil = nearbyint(x);
    cout << "Rounding to-nearest (" << x << ") = " << hasil << endl;

    fesetround(FE_DOWNWARD);
    x = 17.87;
    hasil = nearbyint(x);
    cout << "Rounding downward (" << x << ") = " << nearbyint(x) << endl;

    x = 33.34;
    fesetround(FE_UPWARD);
    hasil = nearbyint(x);
    cout << "Rounding upward (" << x << ") = " << hasil << endl;

    _getch();
    return 0;
}