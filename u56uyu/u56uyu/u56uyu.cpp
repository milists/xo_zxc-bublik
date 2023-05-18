#include <iostream> 

using namespace std;

int main() {
    string arr[3][6];
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

    int kard_x, kard_y;

    for (;;) {
        //ввод крестика

        cin >> kard_x;
        cin >> kard_y;

        if (kard_y == 1)
            kard_y = 0;

        if (kard_y == 3)
            kard_y = 5;

        arr[kard_x-1][kard_y] = "x";

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }

        //ввод нолика

        cin >> kard_x;
        cin >> kard_y;

        if (kard_y == 1)
            kard_y = 0;

        if (kard_y == 3)
            kard_y = 5;

        arr[kard_x - 1][kard_y] = "o";

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}