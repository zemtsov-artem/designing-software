#pragma once

#include "NODE.h"

#define NO_DATA -101

class TDeque 
{
public:
	TDeque() : head(0), tail(0) {}
	TDeque(const DataType);
	~TDeque();

	void push_head(const DataType);
	void push_tail(const DataType);
	DataType pop_head(void);
	DataType pop_tail(void);

	bool is_empty(void);
	bool is_exist(const DataType) const;
	void print(void) const;

private:
	NODE* head;
	NODE* tail;

	NODE* create(const DataType);
	void del(NODE*);
};