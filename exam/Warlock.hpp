#pragma once
#include <string>
#include <iostream>
#include <map>

class ASpell;
class ATarget;

typedef std::map<std::string,ASpell *>    SpellMap;

class Warlock
{
private:
    std::string _name;
    std::string _title;
    SpellMap    _spellBook;

    Warlock(void);
    Warlock(const Warlock &copy);
    Warlock &operator=(const Warlock &rhs);

public:
    Warlock(const std::string &name, const std::string &title);
    ~Warlock();

    void    setTitle(const std::string &title);
    void    introduce(void) const;

    const std::string &getTitle(void) const;
    const std::string &getName(void) const;

    void    learnSpell(ASpell *spell);
    void    forgetSpell(const std::string &name);
    void    launchSpell(const std::string &name, const ATarget &target);
};
