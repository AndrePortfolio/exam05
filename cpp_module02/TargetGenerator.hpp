#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <string>
# include <vector>

class ATarget;

class TargetGenerator
{
	private:
		std::vector<const ATarget*>	targets;

		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &other);
	public:
		TargetGenerator(){}
		~TargetGenerator(){}

		void		learnTargetType(ATarget* target);
		void		forgetTargetType(const std::string& target);
		ATarget*	createTarget(const std::string& target);
};

#endif
