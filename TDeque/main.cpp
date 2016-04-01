#include <iostream>
#include "TDeque.h"

int main()
{
	TDeque q(0);
	for (int i = -1; i > -10; i--)
		q.push_head(i);

	q.print();

	for (int i = 1; i < 10; i++)
		q.push_tail(i);

	q.print();

	return 0;
}