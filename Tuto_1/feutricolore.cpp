#include "feutricolore.h"
#include "iostream"



FeuTricolore::FeuTricolore(const sf::FloatRect &rectangle,int delVert,int delOrange,int delRouge):
    Animation(rectangle),
    _vert{{rectangle.height,rectangle.width}},
    _orange{{rectangle.height,rectangle.width}},
    _rouge{{rectangle.height,rectangle.width}},
    _delVert{delVert},
    _delOrange{delOrange},
    _delRouge{delRouge},
    _timeV{delVert},
    _timeO{delOrange},
    _timeR{delRouge}
{

    _vert.setPosition(rectangle.left, rectangle.top+400 );
    _orange.setPosition(rectangle.left, rectangle.top+200 );
    _rouge.setPosition(rectangle.left, rectangle.top );

    _vert.setFillColor(sf::Color::Green);
    _orange.setFillColor(sf::Color(sf::Color(255,153,0)));
    _rouge.setFillColor(sf::Color::Black);


}





void FeuTricolore::clic()
{

}

void FeuTricolore::top()
{


    if(_delVert>0)
    {
        _delVert--;
        _vert.setFillColor(sf::Color::Green);
        _orange.setFillColor(sf::Color::Black);
        _rouge.setFillColor(sf::Color::Black);


    }


    if(_delVert==0)
    {
        if(_delOrange>0)
        {
            _delOrange--;
            _vert.setFillColor(sf::Color::Black);
            _orange.setFillColor(sf::Color(255,153,0));
        }

    }


    if(_delOrange==0)
    {
        if(_delRouge>0)
        {
            _delRouge--;
            _vert.setFillColor(sf::Color::Black);
            _orange.setFillColor(sf::Color::Black);
            _rouge.setFillColor(sf::Color::Red);
        }

    }
    if(_delVert==0 && _delOrange ==0 && _delRouge==0)
    {
        _delVert=_timeV;
        _delOrange=_timeO;
        _delRouge=_timeR;
    }

}



void FeuTricolore::dessiner(sf::RenderWindow &window)
{
    window.draw(_vert);
    window.draw(_orange);
    window.draw(_rouge);

}



