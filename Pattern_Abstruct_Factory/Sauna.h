#pragma once
#include "TDrawed.h"
class SaunaSeat: public IDrawed{};

class SaunaRadiant: public IDrawed{};


class ISaunaAbstractFactory
{
public:
	//Метод возвращает объект печку 
	virtual SaunaRadiant* CreateSaunaRadiant() = 0;
	//Метод возвращает объект лежак 
	virtual SaunaSeat* CreateSaunaSeat() = 0;
};

class SaunaWoodSeat : public SaunaSeat
{
public:
//Перегружаем метод Draw
	void Draw()
	{
		cout<<" Draw wood seat "<<endl;
	}
};

class SaunaStoneSeat : public SaunaSeat
{
public:
//Перегружаем метод Draw
	void Draw()
	{
		cout<<" Draw stone seat "<<endl;
	}
};


class SaunaStove : public SaunaRadiant
{
public:
//Перегружаем метод Draw
	void Draw()
	{
		cout<<" Draw stove "<<endl;
	}
};

class SaunaSteamGenerator : public SaunaRadiant
{
public:
//Перегружаем метод Draw
	void Draw()
	{
		cout<<" Draw steam generator "<<endl;
	}
};


class FinnishSaunaAbstractFactory: public ISaunaAbstractFactory
{
public:
//Возвращаем каменку, 
	//так как данный вид печи 
//характерен для финской сауны
	 SaunaRadiant* CreateSaunaRadiant()
	 {
		 return new SaunaStove();
	 }
	 //Возвращаем деревянный лежак, 
	//так как данный вид лежака 
//характерен для финской сауны
	 SaunaSeat* CreateSaunaSeat()
	 {
		 return new SaunaWoodSeat();
	 }
};

class TurkishSaunaAbstractFactory: public ISaunaAbstractFactory
{
public:
 	//Возвращаем парогенератор, 
	 //так как данный вид печи 
	 //характерен для хамама
	 SaunaRadiant* CreateSaunaRadiant()
	 {
		 return new SaunaSteamGenerator();
	 }
	 //Возвращаем каменные лежаки, 
	 //так как данный вид лежаков 
	 //характерен для хамама
	 SaunaSeat* CreateSaunaSeat()
	 {
		 return new SaunaStoneSeat();
        }
};
