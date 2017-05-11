#ifndef FeuTricolore_H
#define FeuTricolore_H
#include "Animation.h"

class FeuTricolore:public Animation
{
private:
    int _delVert;
    int _delOrange;
    int _delRouge;
    const int _timeV;
    const int _timeO;
    const int _timeR;

    sf::RectangleShape _vert;
    sf::RectangleShape _orange;
    sf::RectangleShape _rouge;
    sf::Color _auRange;

public:
    FeuTricolore(const sf::FloatRect &rectangle, int delVert, int delOrange, int delRouge);
    virtual void clic() override;
    virtual void top()  override;
    virtual void dessiner(sf::RenderWindow & window) override;
};

#endif // FeuTricolore_H
