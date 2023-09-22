#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>

#include "ASpell.hpp"

class ASpell;
class ATarget;

typedef std::map<std::string, ASpell *>	SpellMap;

class Warlock
{
	private:
		std::string		_name;
		std::string		_title;
		SpellMap		_arr;

		Warlock();
		Warlock(const Warlock &rhs);
		Warlock &operator=(const Warlock &copy);

	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		const std::string		&getName() const;
		const std::string		&getTitle() const;

		void	setTitle(const std::string &title);
		void	introduce() const;

		void	learnSpell(ASpell *ptr);
		void	forgetSpell(std::string name);
		void	launchSpell(std::string name, ATarget const &atarget_ref);
};

#endif
