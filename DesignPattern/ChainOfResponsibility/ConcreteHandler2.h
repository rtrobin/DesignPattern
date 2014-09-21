#pragma once
#include "handler.h"
class ConcreteHandler2 :
	public Handler
{
public:
	ConcreteHandler2( Handler *pSuccessor = nullptr );
	virtual ~ConcreteHandler2(void);

	virtual void HandleRequest();
};

