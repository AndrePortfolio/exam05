#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph &operator=(const Polymorph &other);
		Polymorph(const Polymorph &other);
		Polymorph() : ASpell("Polymorph", "turned into a critter") {}
		Polymorph(const std::string name, const std::string effects) : ASpell(name, effects){}
		~Polymorph(){}

		const Polymorph*	clone() const;
};

#endif
