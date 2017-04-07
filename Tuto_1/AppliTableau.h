#ifndef APPLITABLEAU_H
#define APPLITABLEAU_H

#include "Application.h"
#include <array>

class AppliTableau : public Application
{
private:

    enum class Etat { INITIAL, DEPLACEMENT, AJOUT, FINAL } m_etat;

    Position m_position;
    sf::RectangleShape m_rect;
    sf::CircleShape m_rond;
    sf::RectangleShape m_palette;
    sf::RectangleShape m_case;
    sf::Text m_texte;
    sf::Font m_police;
    int m_numcouleur;
    int m_mouse_square_x;
    int m_mouse_square_y;
    std::array<std::array<int,5>,5>m_tableau;

    bool souris_dans_rectangle(const Position & coin, const Position & dims) const;

    void mouse_button_released() override;
    void mouse_button_pressed() override;

    void dessiner_panneau();
    void dessiner_rond();
    int numero_position(Position m);
    void modifierCouleur(int i, int j);

    Position position_case(int i, int j);
public:
    AppliTableau();
protected:
    void loop()override;
};

#endif // APPLITABLEAU_H
