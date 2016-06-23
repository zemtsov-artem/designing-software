#pragma once 
#include "Item.h"
class Table: public Item 
{
public:
	Table():Item(3,1) {}
	//Перегружаем метод clone() и 
	//возвращаем копию самого себя
	Table *clone() const 
	{ 
		return new Table( *this ); 
	}
	void Draw()
	{
		cout<<" Draw Table with  height = "<<_height<<" and width = "<<_width<<endl;
	}
};