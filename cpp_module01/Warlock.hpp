#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>

class ASpell;
class ATarget;

class Warlock
{
	private:
		std::string					name;
		std::string					title;
		std::vector<const ASpell*>	spells;

		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
	public:
		Warlock(const std::string name, const std::string title);
		~Warlock();

		const std::string	&getName(void) const;
		const std::string	&getTitle(void) const;
		void				setTitle(std::string title);
		void				introduce() const;
		void				learnSpell(const ASpell* spell);
		void				forgetSpell(const std::string spell);
		void				launchSpell(const std::string spell, ATarget& target);
};

#endif
