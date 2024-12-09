#include "ATarget.hpp"
#include "ASpell.hpp"

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}

const std::string	&ASpell::getName(void) const
{
	return this->name;
}

const std::string	&ASpell::getEffects(void) const
{
	return this->effects;
}
