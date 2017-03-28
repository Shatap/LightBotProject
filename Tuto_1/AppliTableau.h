#ifndef APPLITABLEAU_H
#define APPLITABLEAU_H

#include "Application.h"
#include <array>

class AppliTableau : public Application
{
private:

std::array<std::array<int,5>,5>m_tableau;
public:
    AppliTableau();
protected:
    void loop()override;
};

#endif // APPLITABLEAU_H
