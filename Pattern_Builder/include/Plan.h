#pragma once

#include <vector>
#include "Items.h"

using std::vector;

class Plan {
 public:
	void addDoor	(Door door) 	{ _doors.push_back(door); }
	void addWall	(Wall wall) 	{ _walls.push_back(wall); }
	void addWindow	(Window window)	{ _windows.push_back(window); }
	//void addPillar  (Pillar pillar) { _pillarExistence = new Pillar(pillar.X,pillar.Y); }
	void addPillar  (Pillar pillar) { _pillar.push_back(pillar); }
		
	void Draw() {
		for(Wall n : _walls) {
			n.Draw();
		}

		for(Door n : _doors) {
			n.Draw();
		}

		for(Window n : _windows) {
			n.Draw();
		}

		for(Pillar n : _pillar) {
			n.Draw();
		}
		
	}

 protected:
	vector<Door> _doors;
	vector<Wall> _walls;
	vector<Window> _windows;
	vector<Pillar> _pillar;
	//Pillar* _pillarExistence;
};