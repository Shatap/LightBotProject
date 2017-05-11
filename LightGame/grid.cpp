#include "grid.h"

Grid::Grid()
    :m_window{{720,450},"shatappp"}
{
    for(int i=0;i<GRID_SIZE;i++)
    {
        _hex  = new Hexagon(45.,sf::Color::Blue);
        _grid.push_back(_hex);
        _hex->setPosition({2*i+200,20*i+20});
    }

}

void Grid::display()
{
    while (true) {
           std::cout<<_grid.size()<<std::endl;
           m_window.clear(sf::Color::White);
           _hex->Dessiner(m_window);
            m_window.display();
    }
}
