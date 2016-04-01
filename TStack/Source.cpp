#include <iostream>
#include "stack.h"

using namespace std;

int main() 
{
	TStack st;
	for (int i = 0; i < 10; i++)
		st.push(i);

	st.print();
	cout << endl;

	st.pop();
	st.pop();
	st.pop();

	st.print();
	cout << endl;

	DataType tmp;
	cout << "enter: ";
	cin >> tmp;
	cout << boolalpha << st.isExist(tmp) << endl;

	return 0;
}