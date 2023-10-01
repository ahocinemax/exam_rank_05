#pragma once
#include "ASpell.hpp"
#include <string>
#include <iostream>

class ATarget
{
    private:
        std::string _type;

    public:
        ATarget(std::string const &type);
        ATarget(ATarget const &other);
        ATarget &operator=(ATarget const &other);
        virtual ~ATarget(void);

        const std::string getType(void) const;

        virtual ATarget *clone(void) const = 0;
        void getHitBySpell(ASpell const &spell) const;
};