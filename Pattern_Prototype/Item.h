#pragma once 
#include <iostream>
using namespace std;
class Item 
{
protected:
	int _width;
	int _height;
public:
	//Конструктор 
	Item(int width, int height)
	{
		_width = width;
		_height = height;
	}
	//Виртуальный метод клонирования, который будут перегружать наследники
	virtual Item *clone() const = 0;
//метод отрисовки
	virtual void Draw() = 0;
	//функции-аксессоры для полей
	void setWidth(int width){ _width = width; }
	void setHeight(int height){ _height = height; }
};
