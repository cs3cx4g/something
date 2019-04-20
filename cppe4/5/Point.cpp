#include "Point.h"
double Point::area()const{return 0;}
double Point::volume()const{return 0;}
Point::Point(int a,int b){setPoint(a,b);}
void Point::setPoint(int a,int b){x=a;y=b;}
void Point::print() const{cout<<"["<<x<<","<<y<<"]";}

