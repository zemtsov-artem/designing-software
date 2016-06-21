#pragma once

#include "PlanBuilder.h"

class ThreeRoomsApartment : PlanBuilder {
 public:
    virtual void BuildWalls() {
        Wall wall_front(0, 0, 100, 0);
        Wall wall_back(0, 50, 100, 50);
        Wall wall_left(0, 0, 0, 50);
        Wall wall_rigth(100, 0, 100, 50);

        _plan->addWall(wall_front);
        _plan->addWall(wall_back);
        _plan->addWall(wall_left);
        _plan->addWall(wall_rigth);

        Wall wall_1(30, 20, 85, 20);
        Wall wall_2(30, 0, 30, 50);
        Wall wall_kitchen(65, 20, 65, 50);
        Wall wall_bathroom(85, 0, 85, 50);
        Wall wall_room(0, 25, 30, 25);

        _plan->addWall(wall_1);
        _plan->addWall(wall_2);
        _plan->addWall(wall_kitchen);
        _plan->addWall(wall_bathroom);
        _plan->addWall(wall_room);
    }

    virtual void BuildDoors() {}

    virtual void BuildWindows() {}
};