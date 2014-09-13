#pragma once

// abstract base class.
// Defines an object interface, which could dynamically add behavior.
class Componentt
{
public:
	Componentt(void);
	virtual ~Componentt(void);

	// virtual abstract function, implemented by derived class
	virtual void Operation() = 0;
};

