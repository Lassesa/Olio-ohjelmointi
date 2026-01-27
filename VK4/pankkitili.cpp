#include "pankkitili.h"
#include <iostream>
using namespace std;

Pankkitili::Pankkitili(string s) {
    omistaja = s;
    //cout<<"Pankkitili  "<<omistaja<<":lle"<<endl;
}

double Pankkitili::getBalance(){
    return saldo;
}

bool Pankkitili::deposit(double d){
    if (d > 0){
        saldo = saldo + d;
        cout<<omistaja<<" Pankkitili: talletus "<<d<<" tehty"<<endl;
        return true;
    }
    else{
        cout<<"Lukema tulee olla positiivinen"<<endl;
        return false;
    }
}

bool Pankkitili::withdraw(double d){
    if (saldo - d >=0){
        saldo = saldo - d;
        cout<<omistaja<<" Pankkitili: nosto "<<d<<" tehty"<<endl;
        return true;
    }
    else {
        cout<<"Tililla liian vahan katetta"<<endl;
        return false;
    }
}

