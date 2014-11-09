#include "Memento.h"
#include "Originator.h"

int main()
{
	// Create an Originator
	Originator* pOriginator = new Originator("old state");
	pOriginator->PrintState();

	// Create a memento, stored the state of this Originator
	Memento *pMemento = pOriginator->CreateMemento();

	// Change the state of Originator
	pOriginator->SetState("new state");
	pOriginator->PrintState();

	// Restore to the previous state through Memento
	pOriginator->RestoreState(pMemento);
	pOriginator->PrintState();
	
	delete pOriginator;
	delete pMemento;
	
	system("pause");
	return 0;
}