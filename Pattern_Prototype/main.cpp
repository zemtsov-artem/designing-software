#include "Table.h"
#include "Chair.h"
int main() {
	Item* prototype1 = new Table();
	prototype1->Draw();           
		
	prototype1->setWidth(4); 
	prototype1->setHeight(1);      
	prototype1->Draw();//        
	Item* prototype2 =  
prototype1->clone();     
	prototype2->Draw();//  
	Item* prototype3 = new Chair();
prototype3->Draw();//  
     
	prototype3->setWidth(1);       
	prototype3->setHeight(1);
	prototype2 = prototype3->clone();
	prototype2->Draw();//  
                   			      
	delete prototype1;
	delete prototype2;
	delete prototype3;
	return 0;
} 