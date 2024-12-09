#include "ATarget.hpp"
#include "ASpell.hpp"

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}

const std::string	&ATarget::getType(void) const
{
	return this->type;
}
