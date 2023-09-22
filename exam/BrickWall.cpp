#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(const BrickWall &src) : ATarget(src) {}

BrickWall::~BrickWall() {}

BrickWall &BrickWall::operator=(const BrickWall &rhs)
{
    if (this != &rhs)
        ATarget::operator=(rhs);
    return *this;
}

ATarget *BrickWall::clone() const
{
    return new BrickWall(*this);
}
