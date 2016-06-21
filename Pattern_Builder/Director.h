#pragma once

#include "PlanBuilder.h"

class Director {
 public: 
	void Construct(PlanBuilder* builder) {
		builder->buildWalls();
		builder->buildDoors();
		builder->buildWindows();
	}
};
