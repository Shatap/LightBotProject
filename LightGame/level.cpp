#include "level.h"

Level::Level()
{
_grid = new Grid();

Action *rotation = new Action(150,250);
Action *forward = new Action(150,250);
Action *changeAltitude = new Action(150,250);




}

void Level::ExecLevel()
{
    _window.clear(sf::Color::White);

    while(true)
    {
        _grid->display(_window);
        rotation->displayAction();
        forward->displayAction();
        changeAltitude->displayAction();
    }

}
