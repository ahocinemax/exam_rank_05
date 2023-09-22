#pragma once

#include "ASpell.hpp"

class Polymorph : public ASpell
{
    public:
        Polymorph();
        Polymorph(const Polymorph &src);
        virtual ~Polymorph();

        Polymorph &operator=(const Polymorph &rhs);

        ASpell *clone() const;
};