#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {}

ATarget &ATarget::operator=(const ATarget &rhs)
{
    _type = rhs.getType();
    return (*this);
}

ATarget::ATarget(const ATarget &copy)
{
    *this = copy;
}

ATarget::~ATarget() {}

std::string ATarget::getType(void) const { return _type; }

void    ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout << _type << " has been " << spell.getEffects() << std::endl;
}
