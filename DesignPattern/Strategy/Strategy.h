#pragma once
class Strategy
{
public:
	Strategy(void);
	virtual ~Strategy(void);

	virtual void AlgorithmInterface() = 0;
};

