#include "Game.h"
#include "DrawEngine.h"
#include <iostream>
#include <string> <rand>

using namespace std;

void pole(string arr[3][6]) {



    //само поле
    arr[0][1] = "_|";
    arr[0][3] = "_";
    arr[0][4] = "|_";


    arr[1][1] = "_|";
    arr[1][3] = "_";
    arr[1][4] = "|_";


    arr[2][1] = " |";
    arr[2][3] = " ";
    arr[2][4] = "|";


    //пустота между линиями массива
    arr[1][0] = " ";
    arr[1][2] = " ";
    arr[1][5] = " ";

    arr[0][0] = " ";
    arr[0][2] = " ";
    arr[0][5] = " ";

    arr[2][0] = " ";
    arr[2][2] = " ";
    arr[2][5] = " ";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
}


void PVE() {
    srand(time(NULL));

    string arr[3][6];

    pole(arr);


    int bot_x = rand() % 2 + 1;
    int bot_y = rand() % 3 + 1;

    int kard_x, kard_y;

    for (;;) {

        bot_x = rand() % 2 + 1;
        bot_y = rand() % 3 + 1;
        //ввод крестика

        cin >> kard_x;
        cin >> kard_y;

        bool a;

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

        //бот{

        if (bot_y == 1) {
            bot_y = 0;
        }

        if (bot_y == 3) {
            bot_y = 5;
        }

        arr[bot_x - 1][bot_y] = "o";
        // }бот

        //ввод нолика

        cout << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }

    }

    
}
void PVP() {
   
    string arr[3][6];
    pole(arr);
    int kard_x, kard_y;

    for (int i = 0; i <9; i++) {
        cout << "Куда x " << endl;

        cin >> kard_x;
        cin >> kard_y;

        if (kard_y == 1) {
            kard_y = 0;
        }

        if (kard_y == 3) {
            kard_y = 5;
        }

        if (arr[kard_x - 1][kard_y] == "x" || arr[kard_x - 1][kard_y] == "o") {
            cout << "ban"<<endl;
        }


        arr[kard_x - 1][kard_y] = "x";


        cout << "Куда o "<<endl;

        cin >> kard_x;
        cin >> kard_y;



        if (kard_y == 1) {
            kard_y = 0;
        }

        if (kard_y == 3) {
            kard_y = 5;
        }

        if (arr[kard_x - 1][kard_y] == "x" || arr[kard_x - 1][kard_y] == "o") {
            cout << "ban"<<endl;
        }

        arr[kard_x - 1][kard_y] = "o";

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }

    }

    
}