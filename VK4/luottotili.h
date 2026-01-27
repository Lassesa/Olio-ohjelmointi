#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"
using namespace std;

class Luottotili : public Pankkitili
{
public:
    Luottotili(string s, double d);
    bool deposit(double d) override;
    bool withdraw(double d) override;

    //Lisäsin tehtävänannosta poiketen luottorajalle getterin, jolla näkee paljonko luottoa on käytettävissä
    double getLuottoraja();
protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
