#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int maxNum);

    ~Game();

    void play();

private:
    int maxNumero;
    int pelaajanArvaus;
    int randomNumero;
    int laskuri;

    void printGameResult();

};

#endif // GAME_H
