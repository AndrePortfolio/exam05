#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class BrickWall : public ATarget
{
	private:
		std::string type;

	public:
		BrickWall(const BrickWall &other) : ATarget(other.getType()) {}
		BrickWall &operator=(const BrickWall &other);
		BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}
		~BrickWall(){}

		const BrickWall*	clone() const;
};

#endif
