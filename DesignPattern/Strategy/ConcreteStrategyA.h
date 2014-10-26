#pragma once
#include "strategy.h"
class ConcreteStrategyA :
	public Strategy
{
public:
	ConcreteStrategyA(void);
	virtual ~ConcreteStrategyA(void);

	virtual void AlgorithmInterface();
};

