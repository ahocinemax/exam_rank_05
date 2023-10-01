#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!\n";
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
