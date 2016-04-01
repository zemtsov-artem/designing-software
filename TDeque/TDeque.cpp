#include <iostream>
#include "TDeque.h"

using namespace std;

TDeque::TDeque(const DataType data) 
{
	head = create(data);
	tail = head;
}

TDeque::~TDeque() 
{
	NODE* i = head;
	NODE* j = tail;

	for (i, j; i != j; i = i->next, j = j->prev) 
	{
		del(i);
		del(j);
	}

	del(i);
}

NODE* TDeque::create(const DataType data) 
{
	NODE* temp = new NODE;
	temp->data = new DataType;
	*temp->data = data;
	temp->next = temp->prev = 0;

	return temp;
}

void TDeque::del(NODE* item) 
{
	if (item != 0)
	{
		delete item->data;
		delete item;
	}
}

void TDeque::push_head(const DataType data) 
{
	if (!is_empty())
	{
		NODE* temp = create(data);
		temp->next = head;
		head = temp;
	}
	else
	{
		head = create(data);
		tail = head;
	}
}

void TDeque::push_tail(const DataType data) 
{
	if (!is_empty())
	{
		NODE* temp = tail;
		tail->prev = tail;
		tail = create(data);

	}
	else
	{
		head = create(data);
		tail = head;
	}
}

DataType TDeque::pop_head(void) 
{
	if (!is_empty())
	{
		NODE* temp = head;
		del(head);
		head = temp->next;

		DataType t_data = *temp->data;
		return t_data;
	}
	else
		return NO_DATA;
}

DataType TDeque::pop_tail(void) 
{
	if (!is_empty())
	{
		NODE* temp = tail;
		del(tail);
		tail = temp->prev;

		DataType t_data = *temp->data;
		return t_data;
	}
	else
		return NO_DATA;
}

bool TDeque::is_empty(void) 
{
	if (head && tail)
		return false;
	else
		return true;
}

bool TDeque::is_exist(const DataType data) const 
{
	NODE* i = head;
	NODE* j = tail;

	for (i, j; i != j; i = i->next, j = j->prev)
		if ((*i->data == data) || (*j->data == data))
			return true;

	return false;
}

void TDeque::print(void) const 
{
	NODE* temp = head;
	while (temp != 0)
	{
		cout << *temp->data << ' ';
		temp = temp->next;
	}
	cout << endl;
}