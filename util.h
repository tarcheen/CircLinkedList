#ifndef GAURD2
#define GAURD2
#include "circularLL.h"

node* populateCLL(uint16_t count)
{

	if (count < 1)
		return nullptr;

	node* tmp = new node;
	node* head = tmp;
	tmp->data = count * 2;
	tmp->next = nullptr;

	while (count > 1)
	{
		tmp->next = new node;
		tmp = tmp->next;	// go to next node
		tmp->data = count; // set data
		tmp->next = nullptr;
		count--;
	}
	return head;
}

#endif
