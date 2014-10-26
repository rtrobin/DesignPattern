#pragma once
#include "state.h"
#include "Contextt.h"

class ConcreteStateB :
	public State
{
public:
	ConcreteStateB(void);
	virtual ~ConcreteStateB(void);

	void Handle( Contextt* pContext );
};

