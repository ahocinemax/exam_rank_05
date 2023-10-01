#pragma once

#include <string>
#include <iostream>

class ASpell;

class ATarget
{
private:
    std::string _type;
public:
    ATarget(const std::string &type);
    const std::string &getType(void) const;
    virtual ATarget *clone(void) const = 0;
    virtual ~ATarget();
    void getHitBySpell(const ASpell &spell) const;
};
