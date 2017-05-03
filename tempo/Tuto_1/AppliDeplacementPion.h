#ifndef APPLIDEPLACEMENTPION_H
#define APPLIDEPLACEMENTPION_H

#include "Application.h"

class AppliDeplacementPion : public Application
{
public:
    AppliDeplacementPion();

private:
    Position m_position;
    sf::CircleShape m_modele_rond;

    sf::Font m_police;
    sf::Text m_texte_fin;

    sf::RectangleShape m_rectangle;

    enum class Etat { INITIAL, DEPLACEMENT, FINAL } m_etat;

    void loop()  override;

    void dessiner_rond(const Position & p);
    void dessiner_bouton_fin();

    bool souris_dans_rond(const Position & position) const;
    bool souris_dans_rectangle(const Position & coin, const Position & dims) const;

    void mouse_button_pressed()                        override;
    void mouse_button_released()                       override;
    void mouse_moved()                                 override;
    void key_pressed(const sf::Event::KeyEvent &event) override;
};

#endif // APPLIDEPLACEMENTPION_H
