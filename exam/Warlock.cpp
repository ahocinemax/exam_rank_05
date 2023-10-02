#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!\n";
    SpellMap::iterator start = _spellBook.begin();
    SpellMap::iterator end = _spellBook.end();
    while (start != end)
    {
        delete start->second;
        start++;
    }
    _spellBook.clear();
}

Warlock::Warlock(const Warlock &copy) { *this = copy; }

Warlock &Warlock::operator=(const Warlock &rhs)
{
    _name = rhs.getName();
    _title = rhs.getTitle();
    return (*this);
}

void Warlock::setTitle(const std::string &title) { _title = title; }

void Warlock::introduce(void) const 
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

const std::string &Warlock::getName(void) const { return _name; }

const std::string &Warlock::getTitle(void) const { return _title; }

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        _spellBook.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(const std::string &name)
{
    SpellMap::iterator it = _spellBook.find(name);
    if (it != _spellBook.end())
        delete it->second;
    _spellBook.erase(name);
}

void Warlock::launchSpell(const std::string &name, const ATarget &target)
{
    SpellMap::iterator it = _spellBook.find(name);
    if (it != _spellBook.end())
        it->second->launch(target);
}
