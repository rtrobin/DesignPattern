#pragma once

// abstract base class, defines implementation interface function
class Implementor
{
public:
	Implementor(void);
	virtual ~Implementor(void);

	virtual void OperationImpl() = 0;
};

