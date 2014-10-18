#pragma once
#include "Command.h"

class Invoker
{
public:
	Invoker( Command *pCommand );
	virtual ~Invoker(void);

	void Invoke();

private:
	Command *m_pCommand;
};

