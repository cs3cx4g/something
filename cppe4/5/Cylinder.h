#ifndef CYLINDE_H
#define CYLINDE_H
#include "Circle.h"
class Cylinder:public Circle{
public:
	Cylinder(double h=0.0,double r=0.0,int x=0,int y=0);
	void setHeight(double);
	double getHeight();
	virtual double area() const;
	virtual double volume() const;
	virtual void printShapeName() const{cout<<"Cylinder:";}
	virtual void print() const;
private:
	double height;
};
#endif 
