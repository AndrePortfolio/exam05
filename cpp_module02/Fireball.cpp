# include "Fireball.hpp"

Fireball::Fireball(const Fireball &other)
{
	*this = other;
}

Fireball &Fireball::operator=(const Fireball &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->effects = other.effects;
	}
	return *this;
}

const Fireball* Fireball::clone() const
{
	return new Fireball(*this);
}
