#include "DrawBoar.h"
#include "DrawEngine.h"
#include <iostream>
#include <string>
using namespace std;

void DrawBoar::Board()
{
    string arr[3][6];

    arr[0][1] = "_|";
    arr[0][3] = "_";
    arr[0][4] = "|_";


    arr[1][1] = "_|";
    arr[1][3] = "_";
    arr[1][4] = "|_";


    arr[2][1] = " |";
    arr[2][3] = " ";
    arr[2][4] = "|";



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