#pragma once
#include "observer.h"
#include "Subject.h"

//	Class ConcreateObserver, derived from Observer 
class ConcreteObserver :
	public Observer
{
public:
	ConcreteObserver(void);
	virtual ~ConcreteObserver(void);

	// virtual function, implements interface supported by base class
	virtual void Update( Subject* pSubject );
};

