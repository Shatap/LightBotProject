#ifndef FEUCLIGNOTANT_H
#define FEUCLIGNOTANT_H
#include "Minuterie.h"

class FeuClignotant
{

private:
    int _delVert;
    int _delOrange;
    int _delRouge;

    Minuterie *_v;
    Minuterie *_o;
    Minuterie *_r;
    sf::RectangleShape m_rectmins;



public:

    FeuClignotant();
    FeuClignotant(int delVert,int delOrange,int delRouge);
    Minuterie  getFeuVert();
    Minuterie getFeuOrange();
    Minuterie getFeuRouge();
    ~FeuClignotant();

};

#endif // FEUCLIGNOTANT_H
