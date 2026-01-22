#include <iostream>
#include "chef.h"
using namespace std;

int main()
{

    //gordoni testiin
    cout << "Gordonin kokeilu" << endl;
    chef gordoni("Gordon");
    gordoni.makeSalad(11);
    gordoni.makeSoup(14);

    cout << endl << "Marionin kokeilu" << endl;

    // marioni mukaan
    italianChef marioni("Mario");

    // ensin väärällä salasanalla
    cout << "eka yritys" << endl;
    marioni.askSecret("anna pitsua", 100, 100);

    // toinen yritys oikealla salasanalla
    cout << "toka yritys" << endl;
    marioni.askSecret("pizza", 12, 12);


    return 0;
}

