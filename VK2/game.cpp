#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNum)
{
    maxNumero = maxNum;
    pelaajanArvaus =0;
    laskuri=0;
    srand(time(0));

    randomNumero = (rand() %maxNumero) +1;

    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumero << " as a maximum value" << endl;

}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{

    while(pelaajanArvaus !=randomNumero){
        cout << "Give your guess between 1-" << maxNumero <<endl;
        cin >> pelaajanArvaus;
        laskuri++;

        if (pelaajanArvaus < randomNumero){
            cout << "Your guess is too small" << endl;
        }
        else if (pelaajanArvaus > randomNumero){
            cout << "Your guess is too big"<<endl;
        }
        else {
            cout << "Your guess is right = " << pelaajanArvaus << endl;
            printGameResult();
        }
    }
}

void Game::printGameResult(){
    cout << "You guessed the right answer = " << randomNumero << " with " << laskuri << " guesses" << endl;
}
