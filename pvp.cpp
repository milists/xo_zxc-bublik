#include <iostream>
#include "pvp.h"
#include "DrawBoar.h"

using namespace std;

void pvp::PVP() {

    string arr[3][6];
    int kard_x, kard_y;

    for (int i = 0; i == 9; i++) {

        cin >> kard_x;
        cin >> kard_y;

        if (kard_y == 1) {
            kard_y = 0;
        }

        if (kard_y == 3) {
            kard_y = 5;
        }

        if (arr[kard_x - 1][kard_y] == "x" || arr[kard_x - 1][kard_y] == "o") {
            cout << "ban";
        }


        arr[kard_x - 1][kard_y] = "x";


        cout << "kuda \"o\"";

        cin >> kard_x;
        cin >> kard_y;



        if (kard_y == 1) {
            kard_y = 0;
        }

        if (kard_y == 3) {
            kard_y = 5;
        }

        if (arr[kard_x - 1][kard_y] == "x" || arr[kard_x - 1][kard_y] == "o") {
            cout << "ban";
        }

        arr[kard_x - 1][kard_y] = "o";
    }
}
