#pragma once
#include "SpellBook.hpp"
#include <iostream>
#include <string>
#include <map>

class ASpell;
class ATarget;

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		SpellBook	_bookSpell;

		Warlock(void);
		Warlock(Warlock const &rhs);
		Warlock &operator=(Warlock const &rhs);

	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);

		const std::string	&getName(void) const;
		const std::string	&getTitle(void) const;

		void				setTitle(const std::string &title);
		void				introduce(void) const;

		void				learnSpell(ASpell *spell);
		void				forgetSpell(std::string spellName);
		void				launchSpell(std::string spellName, ATarget &target);
};
