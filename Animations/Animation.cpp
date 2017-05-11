#include "Animation.h"
#include "iostream"
using namespace std;





Animation::Animation()
{

}

Animation::Animation(const sf::FloatRect &rectangle)
    :m_rectangle{rectangle}
{

}

bool Animation::contient(const Position &position) const
{  
    return (position.y>=(m_rectangle.top) &&
            (position.y <=m_rectangle.top+m_rectangle.height)&&
            (position.x>=m_rectangle.left)&&
            (position.x <=m_rectangle.left+m_rectangle.width));

}




