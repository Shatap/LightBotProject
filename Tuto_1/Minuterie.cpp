#include "Minuterie.h"
#include "iostream"



Minuterie::Minuterie(const sf::FloatRect &rectangle, int delay):

    Animation(rectangle),
    m_delay{delay},
    m_top{delay},
    m_rectmins{{rectangle.height,rectangle.width}}

  //  m_etat{Status::OFF}
{

    m_rectmins.setPosition(rectangle.left, rectangle.top );

    m_rectmins.setFillColor(_col);
}

void Minuterie::dessiner(sf::RenderWindow &window)
{

    window.draw(m_rectmins);

}




void Minuterie::clic()
{
    m_delay=0;

    if(m_rectmins.getFillColor()==sf::Color::Red)

        m_rectmins.setFillColor(sf::Color::Green);

    else
        m_rectmins.setFillColor(sf::Color::Red);

}

void Minuterie::top()
{
    m_delay++;

    if(m_delay>50)
    {
        if(m_rectmins.getFillColor()==sf::Color::Red)
            m_rectmins.setFillColor(sf::Color::Green);
        else
            m_rectmins.setFillColor(sf::Color::Red);

        m_delay=0;
    }
}

