#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

class ASpell;

class ATarget
{
	protected:
		std::string type;

	public:
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		ATarget() : type("default_type") {}
		ATarget(const std::string type) : type(type){}
		virtual ~ATarget(){}

		const std::string&		getType(void) const;
		void					getHitBySpell(const ASpell& spell) const;
		virtual const ATarget*	clone() const = 0;
};

#endif
