#pragma once
#include "builder.h"

// Derived class: ConcreteBuilder1, inherit from Builder
// Implement interface functions of BuilerPartA() & BuilderPartB()
class ConcreteBuilder1 :
	public Builder
{
public:
	ConcreteBuilder1(void);
	virtual ~ConcreteBuilder1(void);

	virtual void BuilderPartA();
	virtual void BuilderPartB();
};