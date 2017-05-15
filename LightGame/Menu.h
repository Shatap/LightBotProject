#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>

class Menu
{
private:
    sf::RenderWindow _window;
    void drawmenu(sf::RenderWindow &w);
public:
    Menu();
    sf::RectangleShape _playbutton;
    sf::RectangleShape _quitbutton;
    void ShowMenu();

};

#endif // MENU_H
