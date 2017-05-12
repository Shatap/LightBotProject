#ifndef GRID_H
#define GRID_H
#include "hexagon.h"
#include "iostream"

class Grid
{
private:
    std::vector<Hexagon *> _grid;
    Hexagon *_hex;
    sf::RenderWindow m_window;
    const int GRID_SIZE =10;
public:
    Grid();
    void display();


};

#endif // GRID_H
