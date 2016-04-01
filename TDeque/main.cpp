#include <iostream>
#include "TDeque.h"

using namespace std;

int main()
{
	TDeque q(0);

	for (int i = -1, j = 1; i > -10, j < 10; i--, j++)
	{
		q.push_head(i);
		q.push_tail(j);
	}
		
	q.print();

	for (int i = 0; i < 4; i++)
	{
		q.pop_head();
		q.pop_tail();
	}

	q.print();
	cout << endl;

	DataType temp;
	cout << "what do you want to find: ";
	cin >> temp;
	cout << boolalpha << q.is_exist(temp) << endl;

	return 0;
}