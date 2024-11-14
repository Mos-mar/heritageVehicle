#include "CVoiture.hpp"
using namespace std;

CVoiture::CVoiture()
{
    cout << "Creation de CVoiture" << endl;
}

CVoiture::~CVoiture()
{
    cout << "Destruction de CVoiture" << endl;
}

void CVoiture::afficher()
{
    cout << "Ceci est une voiture" << endl;
}
