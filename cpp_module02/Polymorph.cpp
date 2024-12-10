# include "Polymorph.hpp"

Polymorph::Polymorph(const Polymorph &other)
{
	*this = other;
}

Polymorph &Polymorph::operator=(const Polymorph &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->effects = other.effects;
	}
	return *this;
}

const Polymorph* Polymorph::clone() const
{
	return new Polymorph(*this);
}
