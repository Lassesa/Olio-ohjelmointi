#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
    int maxNum;
    cout << "Give maximum number that game can choose: ";
    cin >> maxNum;

    Game peli(maxNum);
    peli.play();

    return 0;
}
