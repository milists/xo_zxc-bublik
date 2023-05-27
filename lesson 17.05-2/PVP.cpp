#include "PVP.h"
#include "kordinati.h"
#include <iostream>

using namespace std;
void pvp() {

    string arr[3][6];
    int kard_x, kard_y;

    for (;;) {
        cin >> kard_x >> kard_y;
        cout << "kuda \"x\"";

        kord( kard_x,  kard_y);

        arr[kard_x - 1][kard_y] = "x";


        cout << "kuda \"o\"";
        cin >> kard_x >> kard_y;

        kord(kard_x, kard_y);

        arr[kard_x - 1][kard_y] = "o";
    }

}