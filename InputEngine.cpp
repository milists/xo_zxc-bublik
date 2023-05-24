#include "InputEngine.h"
#include "Game.h"

#include <iostream>
using namespace std;
void Input(){
int mode;
cin >> mode;
if (mode == 1) {
	PVE();
}
if (mode == 2) {
	PVP();
}
if (mode == 3) {
	//EVP();
}
if (mode == 4) {
	//EVE();

}
if (mode > 4) {
	cout << "ээээээ куда жмешь у нас 4 режима";
}
if (mode < 0) {
	cout << "ЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭ!!!!!!!!!!!!!";
}

}
