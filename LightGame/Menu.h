#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>
#include "Application.h"

class Menu: public Application
{
private:
    sf::RenderWindow _window;
    void drawmenu(sf::RenderWindow &w);
    int _PLAY_WIDTH= 150;
    int _PLAY_HEIGHT= 150;
    int _QUIT_WIDTH= 150;
    int _QUIT_HEIGHT= 150;
public:
    Menu();
    sf::RectangleShape _playbutton;
    sf::RectangleShape _quitbutton;
    void showMenu();
    void loop() override;
    void init() override;
    void mouse_button_pressed() override;
    void mouse_moved() override;
    void key_pressed(const sf::Event::KeyEvent &) override;

};

#endif // MENU_H
