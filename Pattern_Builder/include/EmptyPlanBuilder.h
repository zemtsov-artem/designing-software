#pragma once

#include "PlanBuilder.h"

class EmptyPlanBuilder : public PlanBuilder {
	void buildWalls() {
		Wall wall_front(0,0,10,0);
		Wall wall_back(10,0,10,10);
		Wall wall_left(10,10,0,10);
		Wall wall_rigth(0,10,0,0);

		_plan->addWall(wall_front);
		_plan->addWall(wall_back);
		_plan->addWall(wall_left);
		_plan->addWall(wall_rigth);
	}

	void buildDoors() {}

	void buildWindows() {}
};
