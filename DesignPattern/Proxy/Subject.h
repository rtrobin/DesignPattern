#pragma once

// Defined public interface of Class Proxy and Class RealSubject.
// So that Proxy could be used when RealSubject is needed.
class Subject
{
public:
	Subject(void);
	virtual ~Subject(void);

	virtual void Request() = 0;
};

