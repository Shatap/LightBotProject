#ifndef LEVEL_H
#define LEVEL_H
#include "vector"
#include "robot.h"
#include "grid.h"
#include "action.h"
#include "execsecprog.h"


class Level
{
private:
    sf::RenderWindow _window;
    std::vector<Level*>_levels;
    std::vector<Grid *> _gridslvl;
    Grid * _grid;
    float _score;
    Action *_rotation ;
    Action *_forward ;
    Action *_changeAltitude ;
    ExecSecProg  *_secProg;
    sf::RectangleShape _quit;
    bool _isRunning = true;
    sf::FloatRect _QUIT_DIM ;
    sf::Vector2i _mouse;


public:
    Level();
    float setScore();
    float getScore();
    bool quit();
    void goToNextLevel();
    void replay();
    void pause_exec();
    void execLevel();
    void displayLevelButtons();
    void setMousePos(int x,int y);
    bool isMouseInEntity(const sf::Vector2i & mouse, const sf::FloatRect & entity);


};

#endif // LEVEL_H
