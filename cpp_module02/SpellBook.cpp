#include "SpellBook.hpp"
#include "ASpell.hpp"

void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		spells.push_back(spell->clone());
}

void	SpellBook::forgetSpell(const std::string& spell)
{
	for (std::vector<const ASpell*>::iterator it = spells.begin(); it != spells.end();)
	{
		if ((*it)->getName() == spell)
			it = spells.erase(it);
		else
			it++;
	}
}

ASpell*	SpellBook::createSpell(const std::string& spell)
{
	for (std::vector<const ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
		if ((*it)->getName() == spell)
			return (ASpell*)(*it)->clone();
	return nullptr;
}
