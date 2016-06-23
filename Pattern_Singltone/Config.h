#pragma once
#include <time.h>
class Config
{
protected:
	// объект настроек
	static Config* _self;
	//Конструктор
	Config();
public:
	//Метод получения доступа к объекту
	static Config* getConfig();
	//Сохраняет настройки в файл
	void saveConfig();
	//настройки(время последнего запуска программы)
	time_t lastRun;
};

Config* Config::_self = NULL;
//Конструктор
Config::Config()
{
	//Считываем данные  из файла и  
	//задаем значения переменным
	lastRun = time(0);
}
//Метод получения доступа к объекту
Config* Config::getConfig()
{
	if(!_self)
	{
		_self = new Config();
	}
	return _self;
}
//Сохраняет настройки в файл 
void Config::saveConfig()
{
	//записываем данные в файл
}