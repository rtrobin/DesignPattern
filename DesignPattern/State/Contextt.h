#pragma once
#include "State.h"

class Contextt
{
public:
	Contextt( State *pState );
	virtual ~Contextt(void);

	void Request();
	void ChangeState( State *pState );

private:
	State *m_pState;
};

