#include "asiakas.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string s, double d) : nimi(s), kayttotili(s), luottotili(s,d)
{
    cout<<"Asiakkuus luotu "<<s<<":lle"<<endl;

}

string Asiakas::getNimi(){
    return nimi;
}

void Asiakas::showSaldo(){
    cout << nimi << endl;
    cout<<"Kayttotilin saldo: "<<kayttotili.getBalance()<<endl;

    double kaytettavissa = luottotili.getLuottoraja() + luottotili.getBalance();
    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<" , Kaytettavissa "<<kaytettavissa<<endl;
}

bool Asiakas::talletus(double d){
    return kayttotili.deposit(d);

}

bool Asiakas::nosto(double d){
    return kayttotili.withdraw(d);
}

bool Asiakas::luotonMaksu(double d){
    return luottotili.deposit(d);
}

bool Asiakas::luotonNosto(double d){
    return luottotili.withdraw(d);
}

bool Asiakas::tiliSiirto (double d, Asiakas& saaja){
    if (d <0){
        return false;
    }
    cout<<"Pankkitililta: "<< nimi <<" siirretaan "<<d<<" "<< saaja.getNimi()<<":lle"<<endl;

    bool nostoYritys = kayttotili.withdraw(d);
    if (nostoYritys){
        saaja.talletus(d);
        return true;
    }
    else {
        return false;
    }
}
