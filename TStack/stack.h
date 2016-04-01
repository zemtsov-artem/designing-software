#pragma once

#include "node.h"

class TStack
{
public:
	TStack(): start(0) {}

	void push(const DataType);
	DataType pop(void);
	bool isExist(const DataType) const;
	void print(void) const;

private:
	NODE* start;

	NODE* create(const DataType);
	void del(NODE* elem);
};
