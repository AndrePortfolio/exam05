#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(const ATarget &other)
{
	*this = other;
}

ATarget &ATarget::operator=(const ATarget &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}

const std::string	&ATarget::getType(void) const
{
	return this->type;
}
