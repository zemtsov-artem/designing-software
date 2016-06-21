#include <iostream>

#include "Director.h"
#include "PlanBuilder.h"
#include "EmptyPlanBuilder.h"

void main() {
	Director director;
	PlanBuilder* builder = new EmptyPlanBuilder();

	director.Construct(builder);
	builder->Draw();
	
	std::cout << std::endl;

	builder = new StudioPlanBuilder();
	director.Construct(builder);
	builder->Draw();
	
	delete builder;
}