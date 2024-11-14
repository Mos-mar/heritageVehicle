#ifndef CMOTO_HPP
#define CMOTO_HPP
#include  "CVehicle.hpp"

class CMoto : public CVehicle
{
private:
public:
    CMoto(/* args */);
    ~CMoto();
    void afficher() override;
};




#endif // CMoto_HPP