#ifndef MINUTERIE_H
#define MINUTERIE_H
#include "Animation.h"

class Minuterie: public Animation
{

private:
    int m_top;
    int m_delay;
    sf::RectangleShape m_rectmins;
    enum class Status {ON,OFF} m_etat;
public:
    Minuterie(const sf::RectangleShape &rectangle, int delay);
    void getTimeSpent(sf::RectangleShape rectmins);
    sf::Color setChangeColor(sf::Color color);
    void dessiner(sf::RenderWindow & window) override;

    void clic() override;
    void top() override;

    std::vector<Animation *> insererAnim(Minuterie *m);
};

#endif // MINUTERIE_H
