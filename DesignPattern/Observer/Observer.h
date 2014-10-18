#pragma once

#include "Subject.h"

class Subject;

// Abstract virtual class
class Observer
{
public:
	Observer(void);
	virtual ~Observer(void);

	// pure virtual function, different derived class has different implementation
	// Notify Observer that state has changed
	virtual void Update( Subject* pSubject ) = 0;

protected:
	int m_nObserverState;
};

