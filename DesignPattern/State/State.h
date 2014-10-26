#pragma once

class Contextt;

class State
{
public:
	State(void);
	virtual ~State(void);

	virtual void Handle( Contextt* pContext ) = 0;
};

