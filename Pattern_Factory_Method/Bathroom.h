#pragma once
#include "Room.h"
class Bathroom: public Room
{
protected:
//канализация
	vector<SeweragePipeline> _seweragePipelines; 
public:
	//Функция-аксессор для добавления канализации
	void addSeweragePipeline(SeweragePipeline
             pipeline) 
             {_seweragePipelines.push_back(pipeline); }
	//Перегружаем метод Draw
	void Draw()
	{
		Plan::Draw();
		for(SeweragePipeline n :
                    _seweragePipelines) 
{
			n.Draw();
		}
	}
}; 
