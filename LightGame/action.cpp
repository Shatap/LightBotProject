#include "action.h"


Action::Action()
{
    _recAction.setPosition(100, 50);
    _recAction.setFillColor(sf::Color::Black);
    _recAction.setSize(sf::Vector2f(_ACT_WIDTH,_ACT_HEIGHT ));
}

void Action::setRotation(Robot &r)
{

}

void Action::changeAltitude(Robot  &r)
{

}

void Action::moveForward(Robot  &r)
{

}

