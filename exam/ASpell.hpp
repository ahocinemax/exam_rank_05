#pragma once

#include <string>
#include <iostream>

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effect;

    public:
        ASpell(const std::string &name, const std::string &effect);
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &rhs);

        std::string getName(void) const;
        std::string getEffects(void) const;
        void launch(const ATarget &target) const;

        virtual ASpell *clone(void) const = 0;
        virtual ~ASpell();
};
