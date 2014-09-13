#pragma once
#include "componentt.h"

// derived from Componentt, which could add behavior
class ConcreteComponent :
	public Componentt
{
public:
	ConcreteComponent(void);
	virtual ~ConcreteComponent(void);

	virtual void Operation();
};

