#pragma once 
#include "IRoomCreator.h"
#include "Kitchen.h"
#include "Bathroom.h"
template<class T>
class RoomCreator: public IRoomCreator
{
public:
	//Создает и возвращает объект класса Т
	Room* FactoryMethod()
	{
		//Инициализируем объект класса Т
		return new T();
	}
};