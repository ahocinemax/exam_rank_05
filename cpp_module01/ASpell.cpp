#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::~ASpell() {}

ASpell::ASpell(const ASpell &rhs) { *this = rhs; }

ASpell  &ASpell::operator=(const ASpell &copy)
{
    _name = copy._name;
    _effects = copy._effects;
    return (*this);
}

std::string const &ASpell::getEffects() const { return _effects; }

std::string const &ASpell::getName() const { return _name; }

void ASpell::launch(const ATarget &ref) const
{
    ref.getHitBySpell(*this);
}
