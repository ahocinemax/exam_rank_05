#ifndef ATARGET
# define ATARGET

# include "ASpell.hpp"
# include <iostream>
# include <string>

class ASpell;

class ATarget
{
private:
    std::string _type;
public:
    ATarget(std::string type);
    ATarget &operator=(const ATarget &rhs);
    ATarget(const ATarget &copy);
    virtual ~ATarget();

    std::string getType(void) const;
    virtual ATarget *clone() const = 0;
    void    getHitBySpell(ASpell const &spell) const;
};

#endif
