#pragma once

#include <string>

#include "ATarget.hpp"

typedef std::map<std::string, ATarget *>	TargetMap;

class TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator &copy);
		TargetGenerator &operator=(const TargetGenerator &rhs);
        TargetMap _targetBook;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &TargetType);
		ATarget *createTarget(std::string const &TargetType);
};
