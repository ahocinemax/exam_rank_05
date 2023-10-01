#pragma once
#include <string>
#include <iostream>
#include <map>

#include "ASpell.hpp"

typedef std::map<std::string, ASpell *>	SpellMap;

class ASpell;

class SpellBook
{
	private:
		SpellMap _book;
		SpellBook(const SpellBook &copy);
		SpellBook &operator=(const SpellBook &rhs);

	public:
		SpellBook();
		~SpellBook();

		SpellMap getBook() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		ASpell *createSpell(std::string const &spellName);
};
