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

        Wall wall_1(35, 15, 85, 15);
        Wall wall_2(35, 0, 35, 50);
        Wall wall_kitchen(60, 15, 60, 50);
        Wall wall_bathroom(85, 0, 85, 50);
        Wall wall_room(0, 15, 35, 15);

        _plan->addWall(wall_1);
        _plan->addWall(wall_2);
        _plan->addWall(wall_kitchen);
        _plan->addWall(wall_bathroom);
        _plan->addWall(wall_room);
    }

    virtual void BuildDoors() {}
    Door door_1(10, 15, 11, 15);
    Door door_2(47, 15, 48, 15);
    Door door_3(72, 15, 73, 15);
    Door door_4(35, 7, 35, 8);
    Door door_5(85, 7, 85, 8);
    Door door_6(70, 0, 71, 0);

    _plan->addDoor(door_1);
    _plan->addDoor(door_2);
    _plan->addDoor(door_3);
    _plan->addDoor(door_4);
    _plan->addDoor(door_5);
    _plan->addDoor(door_6);

    virtual void BuildWindows() {}
    Window window_1(15, 50, 20, 50);
    Window window_2(45, 50, 50, 50);
    Window window_3(70, 50, 75, 50);
    Window window_4(0, 30, 0, 35);
    Window window_5(0, 5, 0, 10);
    Window window_6(15, 0, 20, 0);

    _plan->addWindow(window_1);
    _plan->addWindow(window_2);
    _plan->addWindow(window_3);
    _plan->addWindow(window_4);
    _plan->addWindow(window_5);
    _plan->addWindow(window_6);
};