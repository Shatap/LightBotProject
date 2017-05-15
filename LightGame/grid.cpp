#include "grid.h"

Grid::Grid()
    :m_window{{1000,800},"shatappp"}
{

    if(_grid.size()==0)
    {
        _hex  = new Hexagon(30.,sf::Color::Blue);
        _hex->setPosition({100,100});
        _grid.push_back(_hex);

    }

    for(int i=0;i<=GRID_SIZE;i++)

    {
        _hex  = new Hexagon(30.,sf::Color::Blue);

            _prevPosX2=_grid.at(0)->getPosition().x;
            _prevPosY2=_grid.at(0)->getPosition().y;
            _hex->setPosition({_prevPosX2,_prevPosY2+60*i*sin((3.14/3))});
            _grid.push_back(_hex);

        for(int j=0;j<=GRID_SIZE;j++)
        {
            if(j%2==0)
            {
                _hex  = new Hexagon(30.,sf::Color::Blue);

                _prevPosX2=_grid.back()->getPosition().x;
                _prevPosY2=_grid.back()->getPosition().y;
                _hex->setPosition({_prevPosX2+30+(30*cos((3.14/3))),_prevPosY2+30.*sin((3.14/3))});
                _grid.push_back(_hex);

            }

            else
            {
                _hex  = new Hexagon(30.,sf::Color::Blue);

                _prevPosX2=_grid.back()->getPosition().x;
                _prevPosY2=_grid.back()->getPosition().y;
                _hex->setPosition({_prevPosX2+30+(30*cos((3.14/3))),_prevPosY2-30.*sin((3.14/3))});
                _grid.push_back(_hex);

            }


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
