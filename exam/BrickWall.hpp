#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget
{
    public:
        BrickWall();
        BrickWall(const BrickWall &src);
        virtual ~BrickWall();

        BrickWall &operator=(const BrickWall &rhs);

        ATarget *clone() const;
};