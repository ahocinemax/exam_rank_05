#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(const Fireball &src) : ASpell(src) {}

Fireball::~Fireball() {}

Fireball &Fireball::operator=(const Fireball &rhs)
{
    if (this != &rhs)
        ASpell::operator=(rhs);
    return *this;
}

ASpell *Fireball::clone() const
{
    return new Fireball(*this);
}
