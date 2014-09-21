#pragma once
#include "handler.h"
class ConcreteHandler1 :
	public Handler
{
public:
	ConcreteHandler1( Handler *pSuccessor = nullptr );
	virtual ~ConcreteHandler1(void);

	virtual void HandleRequest();
};

