#include <iostream>
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"
#include "Director.h"

int main()
{
	Builder *pBuilder1 = new ConcreteBuilder1;
	Director *pDirector1 = new Director(pBuilder1);
	pDirector1->Construct();

	Builder *pBuilder2 = new ConcreteBuilder2;
	Director *pDirector2 = new Director(pBuilder2);
	pDirector2->Construct();
	
	delete pDirector1;
	delete pDirector2;
	
	system("pause");
	return 0;
}