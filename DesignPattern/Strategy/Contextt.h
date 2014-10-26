#pragma once
#include "Strategy.h"

class Contextt
{
public:
	Contextt( Strategy *pStrategy );
	virtual ~Contextt(void);

	void ContextInterface();

private:
	Strategy *m_pStrategy;
};

