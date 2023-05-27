#include "EVE.h"

#include <iostream>
#include <string> <rand>

using namespace std;


string massEve[3][6];


void  bordEve() {
    massEve[0][1] = "_|";
    massEve[0][3] = "_";
    massEve[0][4] = "|_";


    massEve[1][1] = "_|";
    massEve[1][3] = "_";
    massEve[1][4] = "|_";


    massEve[2][1] = " |";
    massEve[2][3] = " ";
    massEve[2][4] = "|";
}

void bot1Eve() {
    bordEve();
    srand(time(NULL));

    int bot1_x;
    int bot1_y;

    bot1_x = rand() % 3;
    bot1_y = rand() % 3;



    if (bot1_y == 1) {
        bot1_y = 0;
    }

    if (bot1_y == 3) {
        bot1_y = 5;
    }
    //if (massEve[bot1_x - 1][bot1_y] == "x" || massEve[bot1_x - 1][bot1_y] == "o") {
    //
    //    return bot();
    //}
    massEve[bot1_x - 1][bot1_y] = "x";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << massEve[i][j];
        }
        cout << endl;
    }
}

void bot2Eve(){
    bordEve();
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
    //if (massEve[bot_x - 1][bot_y] == "x" || massEve[bot_x - 1][bot_y] == "o") {
    //
    //    return bot();
    //}
    massEve[bot_x - 1][bot_y] = "o";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << massEve[i][j];
        }
        cout << endl;
    }
}

void eve() {
    for (int i=0;i<=20;i++) {
        bot1Eve();
        bot2Eve();
    }
}