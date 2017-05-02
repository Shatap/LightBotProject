#include "Minuterie.h"



Minuterie::Minuterie(const sf::RectangleShape &rectangle, int delay):
    Animation(rectangle.getGlobalBounds()),
    m_delay{delay},
    m_rectmins{rectangle},
    //m_top{top},
    m_etat{Status::OFF}
{
    //m_rectmins.setSize({rectangle.height,rectangle.width});
    m_rectmins.setOutlineThickness(3);


}

void Minuterie::dessiner(sf::RenderWindow &window)
{
    m_rectmins.setFillColor(sf::Color::Black);
    window.draw(m_rectmins);

}

void Minuterie::clic()
{
    this->m_delay=0;
}

void Minuterie::top()
{
    this->m_delay;
}

