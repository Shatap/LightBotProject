#ifndef ACTION_H
#define ACTION_H
#include <SFML/Graphics.hpp>
#include "robot.h"
enum class Type_Action{forward,rotate,change_altitude};
class Action
{
private:
    sf::RectangleShape _recAction;
    const int _ACT_HEIGHT=10;
    const int _ACT_WIDTH=10;


public:
    Action();
    void setRotation(Robot  &r);
    void changeAltitude(Robot  &r);
    void moveForward(Robot  &r);
    //void executeAction();

};

#endif // ACTION_H
