#include "CVehicle.hpp"
#include "CVoiture.hpp"
#include "CMoto.hpp"
using namespace std;

int main()
{

    /*CVehicle v1;
    CVoiture v2;
    CMoto v3;
    CVehicle tabV[3];
    tabV[0] = v1;
    tabV[1] = v2;
    tabV[2] = v3;

    for (auto i = 0; i < 3; i++)
        tabV[i].afficher();*/

    CVehicle *pv1 = new CVehicle();
    CVoiture *pv2 = new CVoiture();
    CMoto *pv3 = new CMoto();

    CVehicle *tabptrV[3];
    tabptrV[0] = pv1;
    tabptrV[1] = pv2;
    tabptrV[2] = pv3;

    for (auto i = 0; i < 3; i++)
        tabptrV[i]->afficher();

    for (auto i = 0; i < 3; i++)
        delete tabptrV[i];


    return 0;
};