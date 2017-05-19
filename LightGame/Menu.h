#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>

class Menu
{
private:
    sf::RenderWindow _window;
    void drawmenu(sf::RenderWindow &w);
    const int _PLAY_HEIGHT = 50 ;
    const int _PLAY_WIDTH = 100 ;
    const int _QUIT_HEIGHT = 50 ;
    const int _QUIT_WIDTH = 100 ;

public:
    Menu();
    sf::RectangleShape _playbutton;
    sf::RectangleShape _quitbutton;
    void showMenu();

};

#endif // MENU_H
