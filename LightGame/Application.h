#ifndef APPLICATION_H
#define APPLICATION_H

#include <SFML/Graphics.hpp>

using Position = sf::Vector2f;

/*
 * Classe abstraite qui fournit un modèle de comportement
 * pour les applications qui en héritent
 *
 * Elle lance la boucle lecture des evenements/affichage,
 * assure le décodage des eévènements et exécute
 * les fonctions mouse_button_pressed, etc. qui sont
 * (re) définies dans les sous-classes, ainsi que
 * (design pattern comportemental : "patron de méthodes")
 */

class Application
{
public:
    Application(sf::RenderWindow& window);

    void run();
    virtual ~Application()               = default;

    static float module(const Position & v);
    static float distance(const Position & p1, const Position & p2 );

protected:
    /*
     * les variables accessibles par les sous-classes
     */
    sf::RenderWindow &_window;           // fenêtre de dessin
    Position         _mouse;            // position de la souris
    sf::Event _event;

    // fonctions accessibles
    void stop();

    // fonctions à surcharger

    // affichage sur m_window (obligatoire)
    virtual void loop()                                 = 0;
    // initialisations avant le lancement de la boucle
    virtual void init()                                  {}

    // divers traitements d'évenements
    virtual void mouse_button_pressed ()                 {}

    virtual void key_pressed (const sf::Event::KeyEvent & /*event*/) {}

private:
    bool m_running;

    void process_events();               // traitement des evenements
    void set_mouse_coord(int x, int y);  // releve coord souris
};

#endif // APPLICATION_H
