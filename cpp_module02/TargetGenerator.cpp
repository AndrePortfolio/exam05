#include "TargetGenerator.hpp"
#include "ATarget.hpp"

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		targets.push_back(target->clone());
}

void	TargetGenerator::forgetTargetType(const std::string& target)
{
	for (std::vector<const ATarget*>::iterator it = targets.begin(); it != targets.end();)
	{
		if ((*it)->getType() == target)
			it = targets.erase(it);
		else
			it++;
	}
}

ATarget*	TargetGenerator::createTarget(const std::string& target)
{
	for (std::vector<const ATarget*>::iterator it = targets.begin(); it != targets.end(); it++)
		if ((*it)->getType() == target)
			return (ATarget*)(*it)->clone();
	return nullptr;
}
