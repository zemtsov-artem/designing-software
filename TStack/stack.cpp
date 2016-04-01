#include <iostream>
#include "stack.h"

using namespace std;

NODE* TStack::create(const DataType data)
{
	NODE* item = new NODE;
	item->data = new DataType;
	*item->data = data;
	item->next = 0;

	return item;
}

void TStack::del(NODE* elem)
{
	delete elem->data;
	delete elem;
}

void TStack::push(const DataType data)
{
	if (start == 0)
		start = create(data);
	else
	{
		NODE* temp = create(data);
		temp->next = start;
		start = temp;
	}
}

DataType TStack::pop(void)
{
	NODE* temp = start;
	start = temp->next;

	DataType t_data = *temp->data;
	del(temp);

	return t_data;
}

bool TStack::isExist(const DataType data) const
{
	NODE* temp = start;
	while (temp != 0)
	{
		if (*temp->data == data)
			return true;

		temp = temp->next;
	}

	return false;
}

void TStack::print(void) const
{
	NODE* temp = start;
	while (temp != 0)
	{
		cout << *temp->data << ' ';
		temp = temp->next;
	}
}
