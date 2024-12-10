#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball &operator=(const Fireball &other);
		Fireball(const Fireball &other);
		Fireball() : ASpell("Fireball", "burnt to a crisp") {}
		Fireball(const std::string name, const std::string effects) : ASpell(name, effects){}
		~Fireball(){}

		const Fireball*	clone() const;
};

#endif
