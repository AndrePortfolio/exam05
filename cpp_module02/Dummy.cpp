# include "Dummy.hpp"

Dummy &Dummy::operator=(const Dummy &other)
{
	if (this != &other)
	{
		ATarget::operator=(other);
		this->type = other.type;
	}
	return *this;
}

const Dummy* Dummy::clone() const
{
	return new Dummy(*this);
}
