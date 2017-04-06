#include "AppliDeplacementPion.h"

namespace {
    constexpr int W = 600, H = 400;
    constexpr float RAYON = 20.0;
    constexpr float X_TEXTE = 400., Y_TEXTE = 350.;
<<<<<<< HEAD
    const std::string POLICE = "/usr/share/fonts/truetype/msttcorefonts/Comic_Sans_MS.ttf";
    //const std::string POLICE ="/usr/share/fonts/truetype/freefont/FreeMono.ttf";
=======
    //const std::string POLICE = "/usr/share/fonts/truetype/msttcorefonts/Comic_Sans_MS.ttf";
    const std::string POLICE ="/usr/share/fonts/gnu-free/FreeMono.ttf";
>>>>>>> d15205cd7e21d7d14993d1cf6281bd4a1c43543a
    const     Position COIN_RECTANGLE {500,350},
            DIMS_RECTANGLE {50, 25};
}

AppliDeplacementPion::AppliDeplacementPion()
    : Application {W, H, L"Démo Déplacement Pion"}
{
    m_position = {W/2, H/2};

    m_modele_rond.setRadius(RAYON);
    m_modele_rond.setOrigin(RAYON, RAYON);
    m_modele_rond.setFillColor(sf::Color::Red);

    if (! m_police.loadFromFile(POLICE)) {
        throw "Police "+POLICE+" manquante";
    }

    m_rectangle.setPosition(COIN_RECTANGLE);
    m_rectangle.setSize(DIMS_RECTANGLE);
    m_rectangle.setFillColor(sf::Color::Blue);

    m_texte_fin.setFont(m_police);
    m_texte_fin.setCharacterSize(20);
    m_texte_fin.setString(L"Fin");
    m_texte_fin.setColor(sf::Color::Green);
    m_texte_fin.setPosition(COIN_RECTANGLE);
}

void AppliDeplacementPion::loop()
{
    if (m_etat == Etat::FINAL) {
        stop();
        return;
    }
    m_window.clear(sf::Color::Black);
    dessiner_bouton_fin();
    dessiner_rond(m_position);

    m_window.display();
}

void AppliDeplacementPion::dessiner_rond(const Position & p)
{
    m_modele_rond.setPosition(p);
    m_window.draw(m_modele_rond);
}

void AppliDeplacementPion::dessiner_bouton_fin()
{
    m_window.draw(m_rectangle);
    m_window.draw(m_texte_fin);
}

bool AppliDeplacementPion::souris_dans_rond(const Position & position) const
{
    return distance(m_mouse, position) <= RAYON;
}

bool AppliDeplacementPion::souris_dans_rectangle(const Position & coin, const Position & dims) const
{
    auto d = m_mouse - coin;
    return 0 <= d.x and d.x <= dims.x and 0 <= d.y and d.y <= dims.y;
}

void AppliDeplacementPion::mouse_button_pressed()
{
    if (souris_dans_rond(m_position)) {
        m_etat = Etat::DEPLACEMENT;
    } else {
        m_etat = Etat::INITIAL;
    }
}

void AppliDeplacementPion::mouse_button_released()
{
   switch (m_etat) {
   case Etat::DEPLACEMENT :
       if (souris_dans_rectangle(COIN_RECTANGLE, DIMS_RECTANGLE)) {
           m_etat = Etat::FINAL;
       } else {
           m_etat = Etat::INITIAL;
       }
       break;
   default:
       break;
   }
}

void AppliDeplacementPion::mouse_moved()
{
    if (m_etat == Etat::DEPLACEMENT) {
        m_position = m_mouse;
    }
}

void AppliDeplacementPion::key_pressed(const sf::Event::KeyEvent &event)
{
    if (event.code == sf::Keyboard::Escape) {
        m_etat = Etat::FINAL;
    }
}
