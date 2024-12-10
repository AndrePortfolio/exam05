#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <vector>

class ASpell;

class SpellBook
{
	private:
		std::vector<const ASpell*>	spells;

		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &other);
	public:
		SpellBook() : spells() {}
		~SpellBook(){}

		void	learnSpell(ASpell* spell);
		void	forgetSpell(const std::string& spell);
		ASpell*	createSpell(const std::string& spell);
};

#endif
