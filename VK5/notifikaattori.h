#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <string>
#include "seuraaja.h"

using namespace std;

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa (Seuraaja *a);
    void poista (Seuraaja *a);
    void tulosta();
    void postita(string s);

private:
    Seuraaja *seuraajat;
};

#endif // NOTIFIKAATTORI_H
