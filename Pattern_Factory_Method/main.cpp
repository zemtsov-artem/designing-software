#include "RoomCreator.h"
int main() {
IRoomCreator* bathroomCreator = new
      RoomCreator<Bathroom>();
Room* bathRoom1 = bathroomCreator->FactoryMethod();
Room* bathRoom2 = bathroomCreator->FactoryMethod();
Room* bathRoom3 = bathroomCreator->FactoryMethod();



IRoomCreator* kitchenCreator = new
      RoomCreator<Kitchen>();
Room* kitchen1 = kitchenCreator->FactoryMethod();
Room* kitchen2 = kitchenCreator->FactoryMethod();
Room* kitchen3 = kitchenCreator->FactoryMethod();


delete bathroomCreator;
delete bathRoom1;
delete bathRoom2;
delete bathRoom3;

delete kitchenCreator;
delete kitchen1;
delete kitchen2;
delete kitchen3;
}