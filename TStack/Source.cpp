#include <iostream>
#include "stack.h"

using namespace std;

int main() 
{
	TStack st;
	for (int i = 0; i < 10; i++)
		st.push(i);

	st.print();

	st.pop(); st.pop(); st.pop();

	st.print();

	DataType tmp;
	cout << "what do you want to find: ";
	cin >> tmp;
	cout << boolalpha << st.isExist(tmp) << endl;

	return 0;
}