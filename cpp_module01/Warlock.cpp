#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    // display message
    // delete and clear spell's array
    std::cout << _name << ": My job here is done!" <<std::endl;
    SpellMap::iterator   start = _arr.begin();
    SpellMap::iterator   end = _arr.begin();
    while (start != end)
    {
        delete start->second;
        start++;
    }
    _arr.clear();
}

const std::string &Warlock::getTitle() const
{
    return (_title);
}

const std::string &Warlock::getName() const
{
    return (_name);
}

void Warlock::setTitle(const std::string &title)
{
    _title = title;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *ptr)
{
    // make a pair of getName and clone with the methods parameter
    if (ptr)
        _arr.insert(std::pair<std::string, ASpell *>(ptr->getName(), ptr->clone()));
}

void Warlock::forgetSpell(std::string name)
{
    // must find, delete and erase the ite
    SpellMap::iterator  it = _arr.find(name);
    if (it != _arr.end())
        delete it->second;
    _arr.erase(name);
}

void Warlock::launchSpell(std::string name, ATarget const &ref)
{
    // select the right one and exec launch's member function
    ASpell *spell = _arr[name];
    if (spell)
        spell->launch(ref);
}
