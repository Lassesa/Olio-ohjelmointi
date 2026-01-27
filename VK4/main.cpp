#include <iostream>
#include <pankkitili.h>
#include <luottotili.h>
#include <asiakas.h>
using namespace std;

int main()
{
    Asiakas a("Aapeli", 1000);
    a.showSaldo();
    cout << endl;

    Asiakas b("Bertta", 1000);
    b.showSaldo();
    cout << endl;


    a.talletus(250);

    a.luotonNosto(150);
    a.showSaldo();
    cout << endl;

    b.showSaldo();
    cout << endl;


    a.tiliSiirto(50, b);


    a.showSaldo();


    b.showSaldo();

    return 0;
}
