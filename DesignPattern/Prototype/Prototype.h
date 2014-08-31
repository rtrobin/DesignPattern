#pragma once

// virtual base class of all prototype class,
// provide Clone() interface
class Prototype
{
public:
	Prototype(void);
	virtual ~Prototype(void);

	virtual Prototype* Clone() = 0;
};

