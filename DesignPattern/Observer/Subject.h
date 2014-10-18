#pragma once

#include <list>
#include "Observer.h"

class Observer;

// Abstract base class Subject, only need to know base class Observer's declaration
class Subject
{
public:
	Subject(void);
	virtual ~Subject(void);

	void Notify();							// Notify state changed
	void Attach( Observer *pObserver );		// Add object
	void Detach( Observer *pObserver );		// Delete object

	// pure virtual function, supports default implementation
	// derived class can implements it to cover base class implementation
	virtual void SetState( int nState );	// Set State
	virtual int GetState();					// Get State

protected:
	int m_nSubjectState;
	std::list< Observer* > m_ListObserver;	// list contains pointers of Observer
};

