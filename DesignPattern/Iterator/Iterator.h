#pragma once

// Abstract base class for Iterator
class Iterator
{
public:
	Iterator(void);
	virtual ~Iterator(void);

	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual int CurrentItem() = 0;
};

