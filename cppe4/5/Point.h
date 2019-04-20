#include <iostream>
using namespace std;
#include "Shape.h"
#ifndef POINT_H
#define POINT_H
class Point : public Shape{
	public:
		Point(int = 0,int = 0);
		void setPoint(int,int);
		int getX() const{return x;}
		int getY() const{return y;}
		virtual double area() const;
		virtual double volume() const;
		virtual void printShapeName() const{cout<<"Point :";}
		virtual void print() const;
	private:
		int x,y;
};
#endif
