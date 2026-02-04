#include "seuraaja.h"
#include "notifikaattori.h"
#include <string>
#include <iostream>
using namespace std;

Seuraaja::Seuraaja(string s) : nimi(s), next(nullptr) {
    cout<<"Luodaan seuraaja "<<s<<endl;

}
string Seuraaja::getNimi(){
    return nimi;
}
void Seuraaja::paivitys(string s){
    cout<<"Seuraaja "<< nimi << " sai viestin: "<< s <<endl;
}
