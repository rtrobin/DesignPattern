#pragma once

// Abstract base class, defines an interface of handling request
class Handler
{
public:
	Handler( Handler *pSuccessor = nullptr );
	virtual ~Handler(void);

	// pure virtual function, implemented by derived class
	virtual void HandleRequest() = 0;

protected:
	Handler *m_pSuccessor;
};

