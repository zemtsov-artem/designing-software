#pragma once

#include <iostream>

using std::cout;
using std::endl;

class Point {
 public:
 	Point(int x=0,int y=0) {
 		X=x;
 		Y=y;
 	}
	int X;
	int Y;
	virtual void Draw() {
		cout << "Point " << X <<" : "<<Y<<endl;
	}		
};

/*------------------------------------------------*/

class Line {
 public:
	Line(int fromX, int fromY, int toX, int toY) {
		FromPoint.X = fromX;
		FromPoint.Y = fromY;

		ToPoint.X = toX;
		ToPoint.Y = toY;
	}

	virtual void Draw() {
		cout << "From " << FromPoint.X <<":"<<FromPoint.Y
			<< " to " << ToPoint.X << ":" <<ToPoint.Y << endl;
	}

	Point FromPoint;
	Point ToPoint;
};

/*------------------------------------------------*/

class Wall: public Line {
 public: 
	Wall(int fromX, int fromY, int toX, int toY): 
			Line(fromX,  fromY,  toX,  toY) {}

	void Draw() { cout << "Wall "; Line::Draw(); }
};

/*------------------------------------------------*/

class Door: public Line {
 public: 
	Door(int fromX, int fromY, int toX, int toY):
			Line(fromX,  fromY,  toX,  toY) {}

	void Draw() { cout << "Door "; Line::Draw(); }
};

/*------------------------------------------------*/

class Window: public Line {
 public: 
	Window(int fromX, int fromY, int toX, int toY):
			Line(fromX,  fromY,  toX,  toY) {}

	void Draw() { cout << "Window "; Line::Draw(); }
};

/*------------------------------------------------*/

class Pillar: public Point {
 public: 
	Pillar(int _X, int _Y):Point(_X,_Y) {}

	void Draw() { cout << "Pillar "; Point::Draw(); }
};

