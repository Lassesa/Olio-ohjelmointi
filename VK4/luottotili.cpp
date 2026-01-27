#include "luottotili.h"
#include <iostream>


Luottotili::Luottotili(string s, double d) : Pankkitili(s) {

    omistaja = s;
    luottoRaja = d;
    cout<<"Pankkitili luotu "<<omistaja<<":lle"<<endl;
    cout<<"Luottotili luotu "<<omistaja<<":lle. Luottoraja: "<<d<<endl;

}


bool Luottotili::deposit(double d){
    if (d < 0) {
        return false;
    }

    if (saldo + d <= 0) {
        saldo += d;
        return true;
    } else {
        return false;
    }
}

bool Luottotili::withdraw(double d) {
    if (d < 0) {
        return false;
    }

    if (saldo - d >= -luottoRaja) {
        saldo -= d;
        cout<<"Luottotili: Nosto "<<d<<" tehty, luottoa jaljella: "<<luottoRaja-d<<endl;
        return true;
    } else {
        return false;
    }
}

double Luottotili::getLuottoraja(){
    return luottoRaja;
}

