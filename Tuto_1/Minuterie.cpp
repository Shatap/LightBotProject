#include "Minuterie.h"



Minuterie::Minuterie(const sf::FloatRect &rectangle, int delay):

    Animation(rectangle),
    m_delay{delay},
    m_top{delay},
  m_rectmins{{rectangle.height,rectangle.width}}
  //  m_etat{Status::OFF}
{
    m_rectmins.setFillColor(sf::Color::Red);
    m_rectmins.setPosition(rectangle.left, rectangle.top );


}

void Minuterie::dessiner(sf::RenderWindow &window)
{
    m_rectmins.setFillColor(sf::Color::Black);
    window.draw(m_rectmins);

}

void Minuterie::clic()
{
    m_delay=0;
}

void Minuterie::top()
{
    m_delay++;
}

