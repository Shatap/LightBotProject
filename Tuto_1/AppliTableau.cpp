#include "AppliTableau.h"
#include <array>
#include <iostream>
using namespace std;
namespace {
constexpr int W = 600, H = 400;
constexpr float RAYON = 20.0;
constexpr float X_TEXTE = 400., Y_TEXTE = 350.;
const std::string POLICE ="/usr/share/fonts/truetype/freefont/FreeMono.ttf";
const     Position COIN_RECTANGLE {500,350},
DIMS_RECTANGLE {50, 25}, COIN_PALETTE {400, 100}, DIMS_CASECOLOR{50, 25},DIMS_PALETTE{50, 175},
DIMS_CASE_CADR{50,50};
const int CASE_SIZE =50;
}
AppliTableau::AppliTableau()
    : Application {1080, 720, L"Démo Tableau"}

{
    m_rect.setPosition(COIN_RECTANGLE);
    m_rect.setSize(DIMS_RECTANGLE);
    m_rect.setFillColor(sf::Color::Blue);

    if (! m_police.loadFromFile(POLICE)) {
        throw "Police "+POLICE+" manquante";
    }

    m_texte.setFont(m_police);
    m_texte.setCharacterSize(20);
    m_texte.setString(L"Fin");
    m_texte.setColor(sf::Color::Green);
    m_texte.setPosition(COIN_RECTANGLE);

    m_numcouleur= -1;

    for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            m_tableau[i][j]= 0;



}
std::array<sf::Color, 7> COULEURS {
    sf::Color::Black,
            sf::Color::Red,
            sf::Color::Green,
            sf::Color::Blue,
            sf::Color::Yellow,
            sf::Color::Magenta,
            sf::Color::Cyan
};


void AppliTableau::loop()
{


    m_window.clear(sf::Color::White);
    m_window.draw(m_rect);
    m_window.draw(m_texte);

    dessiner_palette();
    dessiner_grille();
    numero_position(m_mouse);

    switch(m_etat)
    {
    case Etat::FINAL:
        stop();
        break;
    case Etat::AJOUT:
        dessiner_rond();
        m_window.draw(m_rond);


        break;
    }
    m_window.display();
}

void AppliTableau::mouse_button_pressed()
{
    if (souris_dans_rectangle(COIN_RECTANGLE, DIMS_RECTANGLE)) {
        m_etat = Etat::FINAL;
    } else if (souris_dans_rectangle(COIN_PALETTE, DIMS_PALETTE)){
        m_etat = Etat::AJOUT;
    }

}
void AppliTableau::mouse_button_released()
{
    switch (m_etat) {
    case Etat::DEPLACEMENT :
        if (souris_dans_rectangle(COIN_RECTANGLE, DIMS_RECTANGLE))
            m_etat = Etat::INITIAL;
        break;

    case Etat::AJOUT:
        modifierCouleur();
        m_etat=Etat::INITIAL;
        break;
    default:
        break;
    }
}

bool AppliTableau::souris_dans_rectangle(const Position & coin, const Position & dims) const
{
    auto d = m_mouse - coin;
    return 0 <= d.x and d.x <= dims.x and 0 <= d.y and d.y <= dims.y;

}

Position position_couleur(unsigned c)
{
    Position p{COIN_PALETTE.x, COIN_PALETTE.y + (DIMS_CASECOLOR.y*c)};
    return p;
}
void AppliTableau::dessiner_palette()
{
    for (unsigned c=0; c<COULEURS.size(); c++) {
        m_palette.setPosition (position_couleur(c));
        m_palette.setFillColor( COULEURS[c]);
        m_palette.setSize(DIMS_RECTANGLE);
        m_window.draw(m_palette);
    }
}

void AppliTableau::dessiner_grille()
{
    m_case.setOutlineColor(sf::Color::White);
    m_case.setOutlineThickness(3);
    m_case.setSize({50,50});


    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            m_case.setPosition(CASE_SIZE+i*CASE_SIZE,CASE_SIZE+j*CASE_SIZE);
            m_case.setFillColor(COULEURS[m_tableau[i][j]]);
            cout << "Tab: " << m_tableau[i][j] << endl;
            m_window.draw(m_case);

        }
    }
}

int AppliTableau::numero_position(Position m)
{
    int posmx=m.x-COIN_PALETTE.x;
    if(posmx>0 && posmx<50)
    {
        int posmy=(m.y-COIN_PALETTE.y)/25;
        if (posmy>=0 && posmy<7)
        {
            m_numcouleur=posmy;
            return m_numcouleur;
        }
    }
}

Position AppliTableau::numero_cases(Position m)
{
    Position c;
    if(m.x > DIMS_CASE_CADR.x && m.x < DIMS_CASE_CADR.x + DIMS_CASE_CADR.x*5 &&
       m.y > DIMS_CASE_CADR.y && m.y < DIMS_CASE_CADR.y + DIMS_CASE_CADR.y*5)
    {
        c.x = ((m.x-50) / DIMS_CASE_CADR.x);
        c.y = ((m.y-50) / DIMS_CASE_CADR.y);
        cout << c.y << endl;
        cout << c.x << endl;
    }
    else
        return {-1,-1};
    return c;
}


void AppliTableau::modifierCouleur()
{
    Position kase;
    kase=numero_cases(m_mouse);
    if(kase.x != -1)
    {
        m_tableau[kase.x][kase.y]=m_numcouleur;
    }
}

void AppliTableau::dessiner_rond()
{
    m_rond.setRadius(10);
    m_rond.setFillColor(COULEURS[m_numcouleur]);
    m_rond.setPosition(m_mouse);


}
