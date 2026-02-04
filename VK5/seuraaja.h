#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
using namespace std;
class Seuraaja
{
public:
    Seuraaja(string s);
    string getNimi();
    void paivitys (string s);
    Seuraaja *next;

private:
    string nimi;
};

#endif // SEURAAJA_H
