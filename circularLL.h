#ifndef GAURD
#define GAURD
#include <iostream>
#include "ConsoleColor.h"

using std::cout;
using std::endl;
using std::cin;

struct node
{
	int data;
	node* next;
};

node* display_nodes(node* const head)
{
	node* tmp = head;
	while (tmp != nullptr)
	{
		cout << red << tmp << "(" << tmp->data << ")" << blue << "---->";
		tmp = tmp->next;
	}

	cout << green << head << "(" << head->data << ")" << white << endl;

	return head;
}


#endif
