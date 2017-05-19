#ifndef MENU_H
#define MENU_H
#include "Application.h"
#include <SFML/Graphics.hpp>

class Menu: public Application
{
private:
    void drawmenu(sf::RenderWindow &w);
public:
    Menu();
    sf::RectangleShape _playbutton;
    sf::RectangleShape _quitbutton;
    void ShowMenu();
    void loop() override;
    void init() override;
    void mouse_button_pressed () override;
    void mouse_moved          () override;
    void key_pressed (const sf::Event::KeyEvent & /*event*/) override;

};

#endif // MENU_H
