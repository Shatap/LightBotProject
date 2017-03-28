#include "AppliTableau.h"


AppliTableau::AppliTableau()
    : Application {600, 400, L"Démo Tableau"}

{

}

void AppliTableau::loop()
{

    m_window.clear(sf::Color::Black);


    m_window.display();
}
