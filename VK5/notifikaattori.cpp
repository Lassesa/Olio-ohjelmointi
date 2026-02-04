#include "notifikaattori.h"
#include <iostream>

Notifikaattori::Notifikaattori() : seuraajat(nullptr){
    cout<<"Luodaan notifikaattori"<<endl;
}

void Notifikaattori::lisaa (Seuraaja *a){
    a->next = seuraajat;
    seuraajat = a;
    cout<<"Notifikaattori lisaa seuraajan "<<a->getNimi()<<endl;
}
void Notifikaattori::poista (Seuraaja *nimi){
    Seuraaja *nykyinen = seuraajat;
    Seuraaja *edellinen = nullptr;

    while (nykyinen != nullptr){
        if (nykyinen ->getNimi() == nimi->getNimi()){
            if (edellinen ==nullptr){
                seuraajat = nykyinen->next;
            }
            else {
                edellinen->next = nykyinen-> next;
        }
        cout<<"Notifikaattori poistaa seuraajan "<<nimi->getNimi()<<endl;
        return;
    }
        edellinen = nykyinen;
        nykyinen = nykyinen->next;
    }

}
void Notifikaattori::tulosta(){
    cout <<"Notifikaattorin seuraajat: "<< endl;
    Seuraaja* o = seuraajat;

    while (o != nullptr) {
        cout << "Seuraaja " << o->getNimi() << endl;
        o = o->next;
    }



}
void Notifikaattori::postita(string s){
    cout << "Notifikaattori postittaa viestin: "<<s<<endl;


    Seuraaja *o=seuraajat;
    while (o!=nullptr){
        o->paivitys(s);
        o = o->next;
    }

}
