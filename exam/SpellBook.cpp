#include "SpellBook.hpp"

SpellBook::SpellBook(const SpellBook &copy) { *this = copy; }

SpellBook &SpellBook::operator=(SpellBook const &rhs)
{
	_book = rhs.getBook();
	return *this;
}

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

SpellMap SpellBook::getBook() const { return _book; }

void SpellBook::learnSpell(ASpell *spell) { if (spell) _book[spell->getName()] = spell;}

void SpellBook::forgetSpell(std::string const &spellName)
{
	SpellMap::iterator it = _book.find(spellName);
	if (it != _book.end())
		_book.erase(it);
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
	SpellMap::iterator it = _book.find(spellName);
	return it != _book.end() ? it->second->clone() : NULL;
}