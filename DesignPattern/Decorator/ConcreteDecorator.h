#pragma once
#include "decorator.h"

// derived from Decorator, which dynamically add behavior for ConcreateComponent
class ConcreteDecorator :
	public Decorator
{
public:
	ConcreteDecorator( Componentt* pComponent );
	virtual ~ConcreteDecorator(void);

	virtual void Operation();

private:
	void AddedBehavior();
};

