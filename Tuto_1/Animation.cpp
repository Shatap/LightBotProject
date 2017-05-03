#include "Animation.h"
#include "iostream"
using namespace std;





Animation::Animation(const sf::FloatRect &rectangle)
    :m_rectangle{rectangle}
{

}

bool Animation::contient(const Position &position) const
{
    std::cout<<position.x<<endl;
    std::cout<<position.y<<endl<<endl<<endl;



    std::cout <<"dimension"<<endl;
    std::cout <<m_rectangle.top<<std::endl;
       std::cout <<m_rectangle.top+m_rectangle.height<<endl;
       std::cout <<m_rectangle.left<<std::endl;
          std::cout <<m_rectangle.left+m_rectangle.width<<endl;
          std::cout <<"fin dimension"<<endl;


    return (position.y>=(m_rectangle.top) &&
            (position.y <=m_rectangle.top+m_rectangle.height)&&
            (position.x>=m_rectangle.left)&&
            (position.x <=m_rectangle.left+m_rectangle.width));


}



float Animation::getTop()
{




}

void Animation::clic()
{

}

void Animation::top()
{

}
