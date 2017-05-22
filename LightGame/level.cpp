#include "level.h"
#include "action.h"

Action *rotation = new Action(150,250);
Action *forward = new Action(150,250);
Action *changeAltitude = new Action(150,250);


Level::Level()
{
_grid = new Grid();

//Action *rotation = new Action(150,250);
//Action *forward = new Action(150,250);
//Action *changeAltitude = new Action(150,250);




}

void Level::ExecLevel()
{
    _window.clear(sf::Color::White);

    while(true)
    {
        _grid->display(_window);
        rotation->displayAction(_window);
        forward->displayAction(_window);
        changeAltitude->displayAction(_window);
    }

}
