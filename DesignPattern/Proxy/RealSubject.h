#pragma once
#include "subject.h"

// Real subject
class RealSubject :
	public Subject
{
public:
	RealSubject(void);
	virtual ~RealSubject(void);

	virtual void Request();
};

