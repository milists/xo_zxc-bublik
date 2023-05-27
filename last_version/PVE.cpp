#include "PVE.h"

#include <iostream>
#include <string> <rand>

using namespace std;

string massPve[3][6];

void bordPve() {
    massPve[0][1] = "_|";
    massPve[0][3] = "_";
    massPve[0][4] = "|_";


    massPve[1][1] = "_|";
    massPve[1][3] = "_";
    massPve[1][4] = "|_";


    massPve[2][1] = " |";
    massPve[2][3] = " ";
    massPve[2][4] = "|";
}

void chel() {
    bordPve();
    int kard_x, kard_y;

    cin >> kard_x;
    cin >> kard_y;


    if (kard_y == 1) {
        kard_y = 0;
    }

    if (kard_y == 3) {
        kard_y = 5;
    }

    if (massPve[kard_x - 1][kard_y] == "x" || massPve[kard_x - 1][kard_y] == "o") {
        cout << "тут уже занято, поставь в другое место" << endl;
        return chel();
    }
    massPve[kard_x - 1][kard_y] = "x";


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << massPve[i][j];
        }
        cout << endl;
    }
}

void bot() {
    bordPve();
    srand(time(NULL));

    int bot_x;
    int bot_y;

    bot_x = rand() % 3;
    bot_y = rand() % 5;



    if (bot_y == 1) {
        bot_y = 0;
    }

    if (bot_y == 3) {
        bot_y = 5;
    }
    if (massPve[bot_x - 1][bot_y] == "x" || massPve[bot_x - 1][bot_y] == "o") {
        bot_x = rand() % 3;
        bot_y = rand() % 5;

       return bot();
    }
    massPve[bot_x - 1][bot_y] = "o";
}

void pve() {

    for (;;) {
        chel();
        bot();
    }

}