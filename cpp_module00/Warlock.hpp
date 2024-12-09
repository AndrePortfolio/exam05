#include <iostream>
#include <string>

class Warlock
{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
	public:
		Warlock(const std::string name, const std::string title);
		~Warlock();

		const std::string	&getName(void) const;
		const std::string	&getTitle(void) const;
		void	setTitle(std::string title);
		void	introduce() const;
};
