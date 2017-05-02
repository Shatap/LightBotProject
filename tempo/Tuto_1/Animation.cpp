#include "Animation.h"





Animation::Animation(const sf::FloatRect &rectangle)
{
//    m_rectangle.left-
}

bool Animation::contient(const Position &position) const
{
    return (position.y>=(m_rectangle.top-m_rectangle.height) &&
            (position.y <=m_rectangle.top)&&
            (position.x>=m_rectangle.left)&&
            (position.x <=m_rectangle.left+m_rectangle.width));
}

void Animation::clic()
{

}

void Animation::top()
{

}
