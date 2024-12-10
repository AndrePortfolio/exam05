#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Warlock::Warlock(const std::string name, const std::string title) : name(name), title(title), spellBook()
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

void	Warlock::learnSpell(ASpell* spell)
{
	spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(const std::string& spell)
{
	spellBook.forgetSpell(spell);
}

void	Warlock::launchSpell(const std::string spell, ATarget& target)
{
	ASpell* activeSpell = spellBook.createSpell(spell);

	if (activeSpell)
	{
		activeSpell->launch(target);
		delete activeSpell;
	}
}
