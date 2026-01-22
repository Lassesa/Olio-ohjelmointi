#include "chef.h"
#include <iostream>
using namespace std;

chef::chef(string n) {
    chefName = n;
    cout<<"chef konstruktori"<<endl;

}
chef::~chef() {
    cout<<"chef destruktori"<<endl;
}

string chef::getName(){
    return chefName;
}
int chef::makeSalad(int raakaaine){
    int annoksia = raakaaine / 5;
    cout<<"Salaattiannoksia: "<< annoksia << endl;
    cout<<getName()<<" vihaa salaatteja"<<endl;
    return annoksia;
}
int chef::makeSoup(int raakaaine){
    int annoksia = raakaaine / 3;
    cout<<"Keittoannoksia: "<<annoksia <<endl;
    cout<<"Keitot ovat "<<getName()<<"in lemppareita"<<endl;
    return annoksia;
}

italianChef::italianChef(string n): chef(n){
    cout<<"italianChef konstruktori"<<endl;
}
italianChef::~italianChef(){
    cout<<"italianChef destruktori"<<endl;
}
int italianChef::makePizza(int f, int w){
    int pizzoja = min(f/5,w/5);
    cout<<"Pizzoja tehtiin: "<<pizzoja<<" kappaletta"<<endl;
    return pizzoja;
}
bool italianChef::askSecret(string n, int f, int w){
    if (n == password){
        makePizza(f, w);
        cout<<getName()<<" rakastaa tehda pizzoja"<<endl;
        return true;
    }
    cout<<"Vaara salasana"<<endl;
    return false;
}

