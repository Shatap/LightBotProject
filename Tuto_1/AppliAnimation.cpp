#include "AppliAnimation.h"

#include <array>
#include <iostream>
using namespace std;
namespace {
constexpr float X_TEXTE = 400., Y_TEXTE = 350.;
const std::string POLICE ="/usr/share/fonts/truetype/freefont/FreeMono.ttf";
}
const     Position COIN_RECTANGLE {500,350},
DIMS_RECTANGLE {50, 25}, COIN_PALETTE {400, 100}, DIMS_CASECOLOR{50, 25},DIMS_PALETTE{50, 175},
DIMS_CASE_CADR{50,50};
AppliAnimation::AppliAnimation()
    : Application {1080, 720, L"Atelier 2"}

{


    sf::RectangleShape minut1;
    sf::RectangleShape minut2;
    minut1.setPosition(100., 100.);
    minut1.setSize({50,50});
    minut2.setPosition(300., 100.);
    minut2.setSize({80,40});
    minut1.setFillColor(sf::Color::Black);
    m_animations.push_back(new Minuterie(minut1, 100));
    m_animations.push_back(new Minuterie(minut2, 200));
    minut1.d
    m_etat = Etat::INITIAL;
}

void AppliAnimation::loop()
{
    m_window.clear(sf::Color::White);
    switch(m_etat)
    {
    case Etat::FINAL:
        stop();
        break;
    }
    m_window.display();
}

void AppliAnimation::mouse_button_pressed()
{

}
void AppliAnimation::mouse_button_released()
{
    switch (m_etat) {

    case Etat::INITIAL:
    if (souris_dans_rectangle(COIN_RECTANGLE, DIMS_RECTANGLE)) {
        m_etat = Etat::FINAL;
    }
    break;

    default:
        break;
    }
}

bool AppliAnimation::souris_dans_rectangle(const Position & coin, const Position & dims) const
{
    auto d = m_mouse - coin;
    return 0 <= d.x and d.x <= dims.x and 0 <= d.y and d.y <= dims.y;
}
