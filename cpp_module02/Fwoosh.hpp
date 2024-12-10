#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh &operator=(const Fwoosh &other);
		Fwoosh(const Fwoosh &other);
		Fwoosh() : ASpell("Fwoosh", "fwooshed") {}
		Fwoosh(const std::string name, const std::string effects) : ASpell(name, effects){}
		~Fwoosh(){}

		const Fwoosh*	clone() const;
};

#endif
