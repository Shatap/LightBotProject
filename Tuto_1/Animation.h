#ifndef ANIMATION_H
#define ANIMATION_H
#include <SFML/Graphics.hpp>
#include "Application.h"
class Animation
{

private:

protected:
    sf::FloatRect m_rectangle;
public:
    Animation(const sf::FloatRect &rectangle);
    bool contient (const Position & position) const;
    virtual void clic() = 0;
    virtual void top()  = 0;
    virtual void dessiner(sf::RenderWindow & window) = 0;
    float getTop();
    virtual ~Animation() =default;

};

#endif // ANIMATION_H
