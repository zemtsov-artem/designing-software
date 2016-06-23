#include "Sauna.h"

int main()
{
	ISaunaAbstractFactory* factory= new
           FinnishSaunaAbstractFactory();
	SaunaSeat* seat = factory->CreateSaunaSeat();
	SaunaRadiant* radiant = 
           factory->CreateSaunaRadiant();
	seat->Draw();
	radiant->Draw();

	factory = new TurkishSaunaAbstractFactory();
	seat = factory->CreateSaunaSeat();
	radiant = factory->CreateSaunaRadiant();
	seat->Draw();
	radiant->Draw();

	delete factory;
	delete radiant;
	delete seat;
	return 0;
}