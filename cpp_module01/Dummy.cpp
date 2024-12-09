# include "Dummy.hpp"

Dummy::Dummy(const Dummy &other)
{
	*this = other;
}

Dummy &Dummy::operator=(const Dummy &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

const Dummy* Dummy::clone() const
{
	return new Dummy(*this);
}
