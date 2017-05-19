#ifndef ACTION_H
#define ACTION_H
#include <SFML/Graphics.hpp>
#include "robot.h"
enum class Type_Action{forward,rotate,change_altitude};
class Action
{
private:
    sf::RectangleShape _recAction;
    sf::RenderWindow m_window;

    const int _ACT_HEIGHT=10;
    const int _ACT_WIDTH=10;


public:
    Action(int x,int y);
    void setRotation(Robot  &r);
    void changeAltitude(Robot  &r);
    void moveForward(Robot  &r);
    void displayAction();
    //void executeAction();

};

#endif // ACTION_H
