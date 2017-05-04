#ifndef APPLIANIMATION_H
#define APPLIANIMATION_H

#include "Application.h"
#include "Animation.h"
#include "Minuterie.h"
#include"feutricolore.h"

class AppliAnimation: public Application
{
public:
    AppliAnimation();

private:
    std::vector<Animation *> m_animations;
    enum class Etat { INITIAL, FINAL } m_etat;

    Position m_position;
    sf::RectangleShape m_rect;
    sf::Text m_texte;
    sf::Font m_police;

    void mouse_button_released() override;
    void mouse_button_pressed() override;
    void key_pressed();

    bool souris_dans_rectangle(const Position & coin, const Position & dims) const;
protected:
    void loop()override;
};

#endif // APPLIANIMATION_H

