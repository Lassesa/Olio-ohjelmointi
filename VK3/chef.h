#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;
class chef
{
public:
    chef(string n);
    ~chef();
    string getName();
    int makeSalad(int raakaaine);
    int makeSoup(int raakaaine);

protected:
    string chefName;

};


class italianChef : public chef
{
public:
    italianChef(string n);
    ~italianChef();
    bool askSecret(string n, int f, int w);

private:
    int makePizza(int f, int w);
    string password = "pizza";
    int flour;
    int water;
};

#endif // CHEF_H
