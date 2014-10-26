#include <iostream>
#include "ConcreteIterator.h"
#include "ConcreteAggregate.h"

int main()
{
	Aggregate* pAggregate = new ConcreteAggregate(4);
	Iterator* pIterator = pAggregate->CreateIterator( pAggregate );
	for ( pIterator->First(); false == pIterator->IsDone(); pIterator->Next() )
	{
		std::cout << pIterator->CurrentItem() << std::endl;
	}
	
	delete pAggregate;

	system("pause");
	return 0;
}