#ifndef CVOITURE_HPP
#define CVOITURE_HPP


#include  "CVehicle.hpp"

class CVoiture : public CVehicle
{
private:
    /* data */
public:
    CVoiture(/* args */);
    ~CVoiture();
    void afficher() override;
};


#endif // CVoiture_HPP