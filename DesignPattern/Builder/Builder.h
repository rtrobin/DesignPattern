#pragma once

// Abstract base class: Builder
// Provide different interface function for different implements.
class Builder
{
public:
	Builder(void);
	virtual ~Builder(void);
	
	// Pure virtual function
	virtual void BuilderPartA() = 0;
	virtual void BuilderPartB() = 0; 
};