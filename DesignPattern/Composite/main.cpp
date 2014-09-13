#include <iostream>
#include "Composite.h"
#include "Leaf.h"

int main() 
{ 
	Leaf *pLeaf1 = new Leaf(); 
	Leaf *pLeaf2 = new Leaf(); 
	Composite* pComposite = new Composite(); 

	pComposite->Add(pLeaf1); 
	pComposite->Add(pLeaf2); 
	pComposite->Operation(); 
	pComposite->GetChild(2)->Operation(); 
	delete pComposite;
	
	system("pause"); 
	return 0; 
}