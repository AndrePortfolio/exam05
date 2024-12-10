#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class Dummy : public ATarget
{
	private:
		std::string type;

	public:
		Dummy(const Dummy &other) : ATarget(other.getType()) {}
		Dummy &operator=(const Dummy &other);
		Dummy() : ATarget("Target Practice Dummy") {}
		~Dummy(){}

		const Dummy*	clone() const;
};

#endif
