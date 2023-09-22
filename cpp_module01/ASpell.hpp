#ifndef ASPELL_HPP
# define ASPELL_HPP

# include "Warlock.hpp"
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell(std::string name, std::string effects);
        ASpell(const ASpell &rhs);
        ASpell &operator=(const ASpell &copy);
        virtual ~ASpell();

        const std::string &getEffects() const;
        const std::string &getName() const;

        void launch(const ATarget &atarget_ptr) const;

        virtual ASpell *clone() const = 0;
};

#endif
