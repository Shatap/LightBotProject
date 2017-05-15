#include "grid.h"

Grid::Grid()
    :m_window{{1000,800},"shatappp"}
{
    int p=0;
    for(int i=-1;i<GRID_SIZE;i++)
    {

        if(_grid.size()==0)
        {
            _hex  = new Hexagon(30.,sf::Color::Blue);
            _hex->setPosition({100,100});
            _grid.push_back(_hex);

        }

        else if(_grid.size()==1)
        {
            _hex  = new Hexagon(30.,sf::Color::Blue);

            _prevPosX2=_grid.at(i)->getPosition().x;
            _prevPosY2=_grid.at(i)->getPosition().y;
            _hex->setPosition({_prevPosX2+30+(30*cos((3.1415926/3))),_prevPosY2+30.*sin((3.1415926/3))});
            _grid.push_back(_hex);

            _hex  = new Hexagon(30.,sf::Color::Blue);

            _prevPosX2=_grid.at(i)->getPosition().x;
            _prevPosY2=_grid.at(i)->getPosition().y;
            _hex->setPosition({_prevPosX2+30+(30*cos((3.1415926/3))),_prevPosY2-30.*sin((3.1415926/3))});
            _grid.push_back(_hex);


        }
        else if(_grid.size()==3)
        {
            _hex  = new Hexagon(30.,sf::Color::Blue);

            _prevPosX2=_grid.at(_grid.size()-1)->getPosition().x;
            _prevPosY2=_grid.at(_grid.size()-1)->getPosition().y;
            _hex->setPosition({_prevPosX2+30+(30*cos((3.1415926/3))),_prevPosY2+30.*sin((3.1415926/3))});
            _grid.push_back(_hex);

             _hex  = new Hexagon(30.,sf::Color::Blue);
            _prevPosX2=_grid.at(_grid.size()-2)->getPosition().x;
            _prevPosY2=_grid.at(_grid.size()-2)->getPosition().y;
            _hex->setPosition({_prevPosX2+30+(30*cos((3.1415926/3))),_prevPosY2-30.*sin((3.1415926/3))});
            _grid.push_back(_hex);


            _hex = new Hexagon(30.,sf::Color::Blue);
           _prevPosX2=_grid.at(_grid.size()-4)->getPosition().x;
           _prevPosY2=_grid.at(_grid.size()-4)->getPosition().y;
           _hex->setPosition({_prevPosX2+30.+(30.*cos((3.1415926/3))),_prevPosY2+30*sin((3.1415926/3))});
           _grid.push_back(_hex);


        }



    }


}

Grid::~Grid()
{

}

void Grid::display()
{
    while (true) {

        m_window.clear(sf::Color::White);
        for(Hexagon * h:_grid)
        {
            h->DrawHex(m_window);
        }
        m_window.display();
    }
}
