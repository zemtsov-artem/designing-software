#pragma once

#include "PlanBuilder.h"

class Director {
 public: 
	void Construct(PlanBuilder* builder) {
		builder->BuildWalls();
		builder->BuildDoors();
		builder->BuildWindows();
		builder->BuildPillar();
	}
};
