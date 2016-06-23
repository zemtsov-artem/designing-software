#include ""
#pragma once

class Kitchen: public Room
{
protected:
	vector<GasPipeline> _gaspiPelines; //газ
public:
	//Функция-аксессор для добавления газовой трубы
	void addGasPipeline(GasPipeline pipeline)
            {_gaspiPelines.push_back(pipeline); }
	//Перегружаем метод Draw
	void Draw()
	{
		Plan::Draw();
		for(GasPipeline n : _gaspiPelines) {
			n.Draw();
		}
	}
};
