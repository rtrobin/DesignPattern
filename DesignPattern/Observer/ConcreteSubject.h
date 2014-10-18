#pragma once
#include "subject.h"

// Class ConcreateSubject, derived from Class Subject
class ConcreteSubject :
	public Subject
{
public:
	ConcreteSubject(void);
	virtual ~ConcreteSubject(void);

	virtual void SetState( int nState );
	virtual int GetState();
};

