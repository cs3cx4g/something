#include "Cylinder.h"
Cylinder::Cylinder(double h,double r,int x,int y):Circle(r,x,y){setHeight(h);}
void Cylinder::setHeight(double h){height=h>0?h:0;}
double Cylinder::getHeight(){return height;}
double Cylinder::area() const{
	return 2*Circle::area()+2*3.14159*getRadius()*height;
}
double Cylinder::volume()const{return Circle::area()*height;}
void Cylinder::print() const{
	Circle::print();
	cout<<";Height="<<height;
} 
