#ifndef LEVEL_H
#define LEVEL_H
#include "vector"
#include "robot.h"
#include "grid.h"
#include "action.h"

class Level
{
private:
    sf::RenderWindow _window;
    std::vector<Level*>_levels;
    std::vector<Grid *> _gridslvl;
    Grid * _grid;
    float _score;
public:
    Level();
    float setScore();
    float getScore();
    void quit();
    void goToNextLevel();
    void replay();
    void pause_exec();
    void ExecLevel();

};

#endif // LEVEL_H
