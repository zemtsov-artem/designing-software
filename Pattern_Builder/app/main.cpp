#include <iostream>

#include "Director.h"
#include "ThreeRoomsApartment.h"

void main() {
    Director director;
    PlanBuilder* builder = new ThreeRoomsApartment();
    director.Construct(builder);
    builder->Draw();
}