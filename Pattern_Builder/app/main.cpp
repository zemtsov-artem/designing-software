#include <iostream>

#include "../include/Director.h"
#include "../include/RoomWithPillar.h"
#include "../include/EmptyPlanBuilder.h"

int main() {
    Director director;
    PlanBuilder* builder = new RoomWithPillar();

    director.Construct(builder);
    builder->Draw();
    delete builder;
    return 0;
}