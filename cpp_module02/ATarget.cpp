#include "ATarget.hpp"

ATarget::ATarget(std::string const &type) : _type(type) {}

ATarget::ATarget(ATarget const &other) { *this = other; }

ATarget &ATarget::operator=(ATarget const &rhs)
{
    _type = rhs.getType();
    return (*this);
}

ATarget::~ATarget(void) {}

const std::string ATarget::getType(void) const { return _type; }

void ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
