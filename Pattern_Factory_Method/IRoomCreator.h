#pragma once
#include "Room.h"
class IRoomCreator
{
public:
	//Функция возвращает необходимую комнату
	virtual Room* FactoryMethod() = 0;
};