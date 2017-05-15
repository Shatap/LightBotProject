#include "Menu.h"

Menu::Menu():
    _window{{1000,800},"shatappp"}
{
    _playbutton.setPosition(100, 50);
    _playbutton.setFillColor(sf::Color::Blue);
    _playbutton.setSize(sf::Vector2f(100, 50));
    _quitbutton.setPosition(100, 400);
    _quitbutton.setFillColor(sf::Color::Blue);
    _quitbutton.setSize(sf::Vector2f(100, 50));
}

void Menu::drawmenu(sf::RenderWindow &w) {
    w.draw(_playbutton);
    w.draw(_quitbutton);
}

void Menu::ShowMenu()
{
    while (true) {

        _window.clear(sf::Color::White);
        drawmenu(_window);
        _window.display();
    }
}
