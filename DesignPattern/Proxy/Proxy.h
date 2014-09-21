#pragma once
#include "subject.h"
#include "RealSubject.h"

// Class proxy, contains a pointer of Class RealSubject
class Proxy :
	public Subject
{
public:
	Proxy(void);
	virtual ~Proxy(void);

	virtual void Request();

private:
	RealSubject* m_pRealSubject;
};

