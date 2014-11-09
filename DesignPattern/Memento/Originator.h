#pragma once
#include <string>
#include "Memento.h"

class Originator
{
public:
	Originator(void);
	virtual ~Originator(void);

	Originator( const std::string& rState );
	Memento* CreateMemento();
	void SetMemento( Memento *pMemento );
	std::string GetState();
	void SetState( const std::string& rState );
	void RestoreState( Memento* pMemento );
	void PrintState();

private:
	std::string m_State;
};

