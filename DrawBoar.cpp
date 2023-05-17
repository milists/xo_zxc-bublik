#include "DrawBoar.h"
#include "DrawEngine.h"
#include <iostream>
#include <string>
using namespace std;

void DrawBoar::Board()
{
    string arr[3][3];

    arr[0][0] = "_|";
    arr[0][1] = "_";
    arr[0][2] = "|_";


    arr[1][0] = "_|";
    arr[1][1] = "_";
    arr[1][2] = "|_";


    arr[2][0] = " |";
    arr[2][1] = " ";
    arr[2][2] = "|";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j];
        }
        cout << endl;

    }
}
