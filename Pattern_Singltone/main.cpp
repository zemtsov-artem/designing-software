#include "Config.h"
#include <iostream>
using namespace std;

int main()
//Singleton
{
//Получаем объект с наcтройками
	Config* config = Config::getConfig();
	cout << config->lastRun << endl;
	//Объект обычно живет на всем протяжении существования программы
//Сохраняет данные в файл 
	config->saveConfig();
	return 0;
} 
