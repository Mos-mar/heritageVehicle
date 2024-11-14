#include "CMoto.hpp"
using namespace std;

CMoto::CMoto()
{
    cout << "Creation de CMoto" << endl;
}

CMoto::~CMoto()
{
    cout << "Destruction de CMoto" << endl;
}

void CMoto::afficher()
{
    cout << "Ceci est une moto" << endl;
}
