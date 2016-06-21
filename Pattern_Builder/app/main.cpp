#include <iostream>

#include "Director.h"
#include "EmptyPlanBuilder.h"

void main() {
    Director director;
    PlanBuilder* builder = new EmptyPlanBuilder();
    director.Construct(builder);
    builder->Draw();
}