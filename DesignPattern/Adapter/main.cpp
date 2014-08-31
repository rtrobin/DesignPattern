#include <iostream>
#include "Adapter.h" 

int main()
{
	Adaptee *pAdaptee = new Adaptee;
	Target *pTarget = new Adapter( pAdaptee );

	pTarget->Request();
	delete pTarget;
	
	system("pause");
	return 0;
}