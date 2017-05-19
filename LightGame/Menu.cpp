#include "Menu.h"
#include <iostream>

//std::string title= "Lightbot: Learn to code!";
Menu::Menu():
    Application(1000,800,"title")
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

void Menu::loop()
{

}

void Menu::init()
{

}

void Menu::mouse_button_pressed()
{

}

void Menu::mouse_moved()
{

}

void Menu::key_pressed(const sf::Event::KeyEvent &)
{

}
