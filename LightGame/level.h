#ifndef LEVEL_H
#define LEVEL_H
#include "vector"

class Level
{
private:
    std::vector<Level*>_levels;
    float _score;
public:
    Level();
    float setScore();
    float getScore();
    void quit();
    void goToNextLevel();
    void replay();
    void pause_exec();

};

#endif // LEVEL_H
