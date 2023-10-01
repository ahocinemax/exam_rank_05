#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(const std::string &name, const std::string &effect)
{
}

ASpell::ASpell(const ASpell &copy) { *this = copy; }

ASpell &ASpell::operator=(const ASpell &rhs)
{
    _name = rhs.getName();
    _effect = rhs.getEffects();
    return (*this);
}

std::string ASpell::getName(void) const { return _name; }

std::string ASpell::getEffects() const { return _effect; }

void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}
