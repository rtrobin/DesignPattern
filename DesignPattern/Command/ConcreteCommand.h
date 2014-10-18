#pragma once
#include "command.h"
#include "Receiver.h"

class ConcreteCommand :
	public Command
{
public:
	ConcreteCommand( Receiver* pReceiver );
	virtual ~ConcreteCommand(void);

	virtual void Execute();

private:
	Receiver* m_pReceiver;
};

