#pragma once

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    public:
        Fwoosh();
        Fwoosh(const Fwoosh &src);
        virtual ~Fwoosh();

        Fwoosh &operator=(const Fwoosh &rhs);

        ASpell *clone() const;
};