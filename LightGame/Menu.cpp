#include "Menu.h"

Menu::Menu():
    _window{{1000,800},"shatappp"}
{
    _playbutton.setPosition(100, 50);
    _playbutton.setFillColor(sf::Color::Blue);
    _playbutton.setSize(sf::Vector2f(_PLAY_WIDTH, _PLAY_HEIGHT));
    _quitbutton.setPosition(100, 400);
    _quitbutton.setFillColor(sf::Color::Blue);
    _quitbutton.setSize(sf::Vector2f(_QUIT_WIDTH, _QUIT_HEIGHT));
}

void Menu::drawmenu(sf::RenderWindow &w) {
    w.draw(_playbutton);
    w.draw(_quitbutton);
}

void Menu::showMenu()
{
    while (true) {

        _window.clear(sf::Color::White);
        drawmenu(_window);
        _window.display();
    }
}
