#include "EVP.h"

#include <iostream>
#include <string> <rand>

using namespace std;

string massEvp[3][6];

void bordEVP() {
    massEvp[0][1] = "_|";
    massEvp[0][3] = "_";
    massEvp[0][4] = "|_";


    massEvp[1][1] = "_|";
    massEvp[1][3] = "_";
    massEvp[1][4] = "|_";


    massEvp[2][1] = " |";
    massEvp[2][3] = " ";
    massEvp[2][4] = "|";
}

void botEVP() {
    bordEVP();
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
    if (massEvp[bot_x - 1][bot_y] == "x" || massEvp[bot_x - 1][bot_y] == "o") {
        return botEVP();
    }
    massEvp[bot_x - 1][bot_y] = "x";
}

void chelEVP() {
    bordEVP();
    int kard_x, kard_y;

    cin >> kard_x;
    cin >> kard_y;


    if (kard_y == 1) {
        kard_y = 0;
    }

    if (kard_y == 3) {
        kard_y = 5;
    }

    if (massEvp[kard_x - 1][kard_y] == "x" || massEvp[kard_x - 1][kard_y] == "o") {
        cout << "тут уже занято, поставь в другое место" << endl;
        return chelEVP();
    }
    massEvp[kard_x - 1][kard_y] = "o";


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << massEvp[i][j];
        }
        cout << endl;
    }
}


void evp() {

    for (;;) {
        botEVP();
        chelEVP();
    }
}