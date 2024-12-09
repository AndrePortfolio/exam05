#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;

		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &other);
	public:
		ASpell() : name("default_name"), effects("default_effect") {}
		ASpell(const std::string name, const std::string effects) : name(name), effects(effects){}
		virtual ~ASpell(){}

		const std::string&		getName(void) const;
		const std::string&		getEffects(void) const;
		virtual const ASpell*	clone() const = 0;
		void					launch(const ATarget& target) const;
};

#endif
