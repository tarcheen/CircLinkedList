#ifndef GAURD3
#define GAURD3
#include "util.h"
#include "circularLL.h"

int main()
{
	int resp;
	cout << "how many nodes you need? ";
	cin >> resp;

	while (cin.fail())
	{
		cin.clear();			// clear flag
		cin.ignore(20, '\n');	// flush extra characters
		cin >> resp;
	}

	node* head = populateCLL(resp);
	head = display_nodes(head);
	
}


#endif