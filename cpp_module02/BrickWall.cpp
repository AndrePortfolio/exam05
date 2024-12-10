# include "BrickWall.hpp"

BrickWall &BrickWall::operator=(const BrickWall &other)
{
	if (this != &other)
	{
		ATarget::operator=(other);
		this->type = other.type;
	}
	return *this;
}

const BrickWall* BrickWall::clone() const
{
	return new BrickWall(*this);
}
