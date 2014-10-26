#pragma once
#include "state.h"
#include "Contextt.h"

class ConcreteStateA :
	public State
{
public:
	ConcreteStateA(void);
	virtual ~ConcreteStateA(void);

	void Handle( Contextt* pContext );
};

