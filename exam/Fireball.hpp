#pragma once

#include "ASpell.hpp"

class Fireball : public ASpell
{
    public:
        Fireball();
        Fireball(const Fireball &src);
        virtual ~Fireball();

        Fireball &operator=(const Fireball &rhs);

        ASpell *clone() const;
};