#pragma once

// Class to be adapted
class Target
{
public:
	Target(void);
	virtual ~Target(void);
	
	virtual void Request() = 0;
};

