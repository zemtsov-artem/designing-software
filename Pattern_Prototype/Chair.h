#pragma once 
#include "Item.h"
class Chair: public Item 
{
public:
	Chair():Item(3,1) {}
	//Перегружаем метод clone() и 
	//возвращаем копию самого себя
	Chair *clone() const 
	{ 
		return new Chair( *this ); 
	}
	void Draw()
	{
		cout<<" Draw Chair with  height = "<<_height<<" and width = "<<_width<<endl;
	}
};