#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"
#include "BrickWall.hpp"
#include "Fireball.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
    std::cout << _name << ": My job here is done!" << std::endl;
    SpellMap::iterator it = _bookSpell.getBook().begin();
    SpellMap::iterator ite = _bookSpell.getBook().end();
    while (it != ite)
    {
        delete it->second;
        it++;
    }
    _bookSpell.getBook().clear();
}

const std::string	&Warlock::getName(void) const { return _name; }

const std::string	&Warlock::getTitle(void) const { return _title; }

void				Warlock::setTitle(const std::string &title) { _title = title; }

void				Warlock::introduce(void) const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        _bookSpell.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
    SpellMap::iterator it = _bookSpell.getBook().find(spellName);
    if (it != _bookSpell.getBook().end())
    {
        delete it->second;
        _bookSpell.getBook().erase(it);
    }
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
    SpellMap::iterator it = _bookSpell.getBook().find(spellName);
    if (it != _bookSpell.getBook().end() && it->second)
        it->second->launch(target);
}

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}