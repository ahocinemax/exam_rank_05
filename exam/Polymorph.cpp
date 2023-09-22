#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(const Polymorph &src) : ASpell(src) {}

Polymorph::~Polymorph() {}

Polymorph &Polymorph::operator=(const Polymorph &rhs)
{
    if (this != &rhs)
        ASpell::operator=(rhs);
    return *this;
}

ASpell *Polymorph::clone() const
{
    return new Polymorph(*this);
}
