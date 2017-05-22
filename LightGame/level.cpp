#include "level.h"

Level::Level()
    :_window{{1920,1080},"shatappp"}
{
    _grid = new Grid();

    _secProg = new ExecSecProg(1200,500,Type_Action::sec_prog);
    _changeAltitude = new Action(1200,400,Type_Action::change_altitude);
    _forward = new Action(1200,300,Type_Action::forward);
    _rotation = new Action(1200,200,Type_Action::rotate);
    _quit.setFillColor(sf::Color::Red);
    _quit.setPosition(1200,700);
    _quit.setSize({40,40});



}
bool Level::quit()
{
    if(isMouseInEntity(_mouse,_QUIT_DIM))
        return _isRunning=false;
}

void Level::execLevel()
{
    if(_isRunning==false)
    {
        std::cout << " NTMMMM" << std::endl ;
    }
sf::Event event;
    while(_isRunning==true)
    {
        _window.clear(sf::Color::White);
        _forward->displayAction(_window);
        _rotation->displayAction(_window);
        _changeAltitude->displayAction(_window);
        _secProg->displayAction(_window);
        _grid->display(_window);
        displayLevelButtons();
        _window.display();
       _QUIT_DIM= _quit.getGlobalBounds();

        if(sf::Event::MouseButtonPressed)
        {
            setMousePos(event.mouseButton.x,event.mouseButton.y);
            std::cout<<_mouse.x<<std::endl;
        }


    }

}

void Level::displayLevelButtons()
{
    _window.draw(_quit);

}

bool Level::isMouseInEntity(const sf::Vector2i &mouse, const sf::FloatRect &entity)
{

    return  (mouse.y>=(entity.top) &&
            (mouse.y <=entity.top+entity.height)&&
            (mouse.x>=entity.left)&&
            (mouse.x <=entity.left+entity.width));
       std::cout << " EZZZZZZZZZZZZZZZ";

}

void Level::setMousePos(int x,int y)
{
    auto pos = _window.mapPixelToCoords( {x, y});
    _mouse = { pos.x, pos.y };

}
