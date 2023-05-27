#include "PVP.h"

#include <iostream>
#include <string> <rand>

using namespace std;


 string massPvp[3][6];


 void mass() {
     massPvp[0][1] = "_|";
     massPvp[0][3] = "_";
     massPvp[0][4] = "|_";


     massPvp[1][1] = "_|";
     massPvp[1][3] = "_";
     massPvp[1][4] = "|_";


     massPvp[2][1] = " |";
     massPvp[2][3] = " ";
     massPvp[2][4] = "|";
 }

int a1() {
    mass();
    int kard_x, kard_y;

    cin >> kard_x;  
    cin >> kard_y;

    if (kard_x > 3 || kard_y > 3) {
        cout << "так нельзя" << endl;
        return a1();
    }


    if (kard_y == 1) {
        kard_y = 0;
    }

    if (kard_y == 3) {  
        kard_y = 5;
    }

    //if (massPvp[kard_x - 1][kard_y] == "x" || massPvp[kard_x - 1][kard_y] == "o") {
    //    cout <<"тут уже занято, поставь в другое место" << endl;
    //    return a1();
    //}
    massPvp[kard_x - 1][kard_y] = "x";


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << massPvp[i][j];
        }
        cout << endl;
    }

}


int a2() {
    mass();
    int kard_x, kard_y;

    cin >> kard_x;
    cin >> kard_y;

    if (kard_x > 3 || kard_y > 3) {
        cout << "так нельзя" << endl;
        return a1();
    }

    if (kard_y == 1) {
        kard_y = 0;
    }

    if (kard_y == 3) {
        kard_y = 5;
    }

    if (massPvp[kard_x - 1][kard_y] == "x" || massPvp[kard_x - 1][kard_y] == "o") {
        cout << "тут уже занято, поставь в другое место" << endl;
        return a2();
    }
    massPvp[kard_x - 1][kard_y] = "o";


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << massPvp[i][j];
        }
        cout << endl;
    }
}

void pvp() {

    for (;;) {
        a1();
        a2();
    }

}