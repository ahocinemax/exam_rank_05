#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects) {}

ASpell &ASpell::operator=(ASpell const &copy)
{
	_name = copy._name;
	_effects = copy._effects;
	return (*this);
}

ASpell::ASpell(ASpell const &rhs) { *this = rhs; }

ASpell::~ASpell() {}

std::string const &ASpell::getName() const { return (_name); }

std::string const &ASpell::getEffects() const { return (_effects); }

void ASpell::launch(ATarget const &target) const { target.getHitBySpell(*this); }