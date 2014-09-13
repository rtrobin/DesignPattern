#pragma once

// virtual abstract class in Composite design
class Componentt
{
public:
	Componentt(void);
	virtual ~Componentt(void);

	// virtual abstract function, only supports interface, no default implementation
	virtual void Operation() = 0;
	// virtual function, supports interface, default blank implementation
	virtual void Add( Componentt* pChild ); 
	virtual void Remove( Componentt* pChild ); 
	virtual Componentt* GetChild( const unsigned int &nIndex ); 
};

