#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Point.cpp"
#include "Circle.cpp"
#include "Cylinder.cpp"
using namespace std;
void vpf(const Shape *bptr){
	bptr->printShapeName();
	bptr->print();
	cout<<"\nArea="<<bptr->area()<<"\nVolume="<<bptr->volume()<<endl<<endl;
}
void vrf(const Shape &bref){
	bref.printShapeName();
	bref.print();
	cout<<"\nArea="<<bref.area()<<"\nVolume="<<bref.volume()<<endl<<endl;
}
int main(){
	cout << setiosflags(ios::fixed|ios::showpoint)<<setprecision(2);
	Point point(7,11);
	Circle circle(3.5,22,8);
	Cylinder cylinder(10,3.3,10,10);
	Shape *array0fShapes[3];
	array0fShapes[0]=&point;
	array0fShapes[1]=&circle;
	array0fShapes[2]=&cylinder;
	cout<<"-----通过基类指针访问虚函数-----"<<endl;
	for(int i=0;i<3;i++)
        	vpf(array0fShapes[i]);
	cout<<"-----通过基类引用访问虚函数-----"<<endl;
	for(int j=0;j<3;j++)
		vrf(*array0fShapes[j]);
	return 0;
}
	
