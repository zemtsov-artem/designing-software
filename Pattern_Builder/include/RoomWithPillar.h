#pragma once

#include "PlanBuilder.h"

class RoomWithPillar : public PlanBuilder {
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
    }

    virtual void BuildDoors() {
        Door door_1(0, 23, 0, 25);
        Door door_2(100, 23, 100, 25);

        _plan->addDoor(door_1);
        _plan->addDoor(door_2);
    }

    virtual void BuildWindows() {
        Window window_1(20, 50, 30, 50);
        Window window_2(70, 50, 80, 50);

        _plan->addWindow(window_1);
        _plan->addWindow(window_2);
    }
    virtual void BuildPillar() {
        Pillar MiddlePillar(50,25);
        _plan->addPillar(MiddlePillar);
    }
};