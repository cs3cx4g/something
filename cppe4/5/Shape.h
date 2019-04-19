#ifndef SHAPE_H
#define SHAPE_H
class Shape{
	public:
		virtual double area() const=0;
		virtual double volume() const=0;
		virtual void printShapeName() const=0;
		virtual void print() const=0;
};
#endif 
