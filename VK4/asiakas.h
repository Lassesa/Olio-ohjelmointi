#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "pankkitili.h"
#include "luottotili.h"
#include <string>
using namespace std;

class Asiakas
{
public:
    Asiakas(string s, double d);
    string getNimi();
    void showSaldo();
    bool talletus(double d);
    bool nosto(double d);
    bool luotonMaksu(double d);
    bool luotonNosto(double d);
    bool tiliSiirto (double d, Asiakas &saaja);

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

};

#endif // ASIAKAS_H
