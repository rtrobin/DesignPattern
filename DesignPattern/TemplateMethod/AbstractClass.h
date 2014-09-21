#pragma once

// Abstract base class, defines the outline of algorithm
class AbstractClass
{
public:
	AbstractClass(void);
	virtual ~AbstractClass(void);

	// This function defines the outline of algorithm
	void TemplateMethod(); 

protected:
	// pure virtual function, implemented by dervied class
	virtual void PrimitiveOperation1() = 0; 
	virtual void PrimitiveOperation2() = 0; 
};

