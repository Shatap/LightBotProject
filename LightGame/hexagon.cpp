#include "hexagon.h"

Hexagon::Hexagon()
{

}

Hexagon::Hexagon(float size, sf::Color color)
    :_size{size},_color{color}

{
    _hexa.setPointCount(6);
    _hexa.setRadius(_size);
    _hexa.setFillColor(color);
    _hexa.setOutlineThickness(2);
    _hexa.setRotation(30);


}

void Hexagon::Dessiner(sf::RenderWindow &w)
{
    w.draw(_hexa);

}

sf::Vector2f Hexagon::getPosition()
{
    return _hexa.getPosition();
}

void Hexagon::setPosition(sf::Vector2f pos)
{
    _hexa.setPosition(pos);
}
