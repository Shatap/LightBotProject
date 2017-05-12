#include "grid.h"

Grid::Grid()
    :m_window{{1000,800},"shatappp"}
{
    for(int i=0;i<GRID_SIZE/2;i++)
    {
        for(int j= 0;j<GRID_SIZE/2;j++)
        {
            _hex  = new Hexagon(30.,sf::Color::Blue);
            _hex->setPosition({60*i+20,60*j+20});
            _grid.push_back(_hex);

        }
    }


}

void Grid::display()
{
    while (true) {

        m_window.clear(sf::Color::White);
        for(Hexagon * h:_grid)
        {
            h->Dessiner(m_window);
        }
            m_window.display();
    }
}
