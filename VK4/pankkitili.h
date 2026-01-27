#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>
using namespace std;

class Pankkitili
{
public:
    Pankkitili(string s);
    double getBalance();
    virtual bool deposit(double d);
    virtual bool withdraw(double d);

protected:
    string omistaja;
    double saldo=0;
};

#endif // PANKKITILI_H
