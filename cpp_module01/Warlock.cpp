#include "Warlock.hpp"
#include "ASpell.hpp"

Warlock::Warlock(const std::string name, const std::string title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

void	Warlock::introduce() const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

const std::string	&Warlock::getName(void) const
{
	return this->name;
}

const std::string	&Warlock::getTitle(void) const
{
	return this->title;
}

void	Warlock::setTitle(std::string title)
{
	this->title = title;
}

void	Warlock::learnSpell(const ASpell* spell)
{
	spells.push_back(spell);
}

void	Warlock::forgetSpell(const std::string spell)
{
	for (std::vector<const ASpell*>::iterator it = spells.begin(); it != spells.end();)
	{
		if ((*it)->getName() == spell)
			it = spells.erase(it);
		else
			it++;
	}
}

void	Warlock::launchSpell(const std::string spell, ATarget& target)
{
	for (std::vector<const ASpell*>::iterator  it = spells.begin(); it != spells.end(); it++)
		if ((*it)->getName() == spell)
			(*it)->launch(target);
}
