#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator()
{
	TargetMap::iterator it = _targetBook.begin();
	TargetMap::iterator ite = _targetBook.end();
	while (it != ite)
	{
		delete it->second;
		it++;
	}
	_targetBook.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		_targetBook[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &TargetType)
{
	TargetMap::iterator it = _targetBook.find(TargetType);
	if (it != _targetBook.end())
	{
		delete it->second;
		_targetBook.erase(it);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &TargetType)
{
	TargetMap::iterator it = _targetBook.find(TargetType);
	return it != _targetBook.end() ? it->second->clone() : NULL;
}