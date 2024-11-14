#include "CVehicle.hpp"
using namespace std;

CVehicle::CVehicle()
{
    cout << "Creation de CVehicle" << endl;
}

CVehicle::~CVehicle()
{
    cout << "Destruction de CVehicle" << endl;
}

void CVehicle::afficher()
{
    cout << "je suis un vehicle" << endl;
}
