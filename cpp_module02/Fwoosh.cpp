# include "Fwoosh.hpp"

Fwoosh::Fwoosh(const Fwoosh &other)
{
	*this = other;
}

Fwoosh &Fwoosh::operator=(const Fwoosh &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->effects = other.effects;
	}
	return *this;
}

const Fwoosh* Fwoosh::clone() const
{
	return new Fwoosh(*this);
}
