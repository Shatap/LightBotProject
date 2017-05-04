#include "Minuterie.h"
#include "iostream"



Minuterie::Minuterie(const sf::FloatRect &rectangle, int delay):

    Animation(rectangle),
    m_delay{delay},
    m_top{delay},
    _timer{delay},
    m_rectmins{{rectangle.height,rectangle.width}}

  //  m_etat{Status::OFF}
{

    m_rectmins.setPosition(rectangle.left, rectangle.top );


}

void Minuterie::dessiner(sf::RenderWindow &window)
{

    window.draw(m_rectmins);

}




void Minuterie::clic()
{
    m_delay=_timer;

    if(m_rectmins.getFillColor()==sf::Color::Red)

        m_rectmins.setFillColor(sf::Color::Green);

    else
        m_rectmins.setFillColor(sf::Color::Red);

}

void Minuterie::top()
{
    if(m_delay>(_timer/2))
    {
        m_rectmins.setFillColor(sf::Color::Red);
    }
    else if(m_delay<=(_timer/2) && m_delay!=0)
    {
        m_rectmins.setFillColor(sf::Color::Green);
    }
    else m_delay=_timer;

    m_delay--;
}

