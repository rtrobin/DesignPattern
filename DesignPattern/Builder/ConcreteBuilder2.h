#pragma once
#include "builder.h"

// Derived class: ConcreteBuilder2, inherit from Builder
// Implement interface functions of BuilerPartA() & BuilderPartB()
class ConcreteBuilder2 :
	public Builder
{
public:
	ConcreteBuilder2(void);
	virtual ~ConcreteBuilder2(void);

	virtual void BuilderPartA();
	virtual void BuilderPartB();
};