#include <iostream>
using namespace std;
class Calculator {
	unsigned short int count;
	public:
	void display(){cout<<"count:"<<count<<endl;}
	Calculator(unsigned short int x):count(x){};
	Calculator(){count=0;}
	Calculator &operator++(){
		++count;
		return *this;
	}
	Calculator operator++(int){
		Calculator t(*this);
		count++;
		return t;
	}
	Calculator &operator--(){
		--count;
		return *this;
	}
	Calculator operator--(int){
		Calculator t(*this);
		count--;
		return t;
	}
	Calculator operator+(const Calculator p){
		unsigned short temp;
		temp=p.count+count;
		return temp;
	}
	Calculator operator-(const Calculator d){
		unsigned short temp;
		temp=count-d.count;
		return temp;
	}
	Calculator &operator=(const Calculator &s){
		count=s.count;
	}
};
int main()
{
	Calculator door1,door2(20);
	for(int i=0;i<100;i++)
		door1++;
	door2++;
	door1.display();
	door2.display();
	for(int i=0;i<5;i++)
		door1--;
	door2--;
	door1.display();
	door2.display();
	--door1;
	door1.display();
	--door2;
	door2.display();
	return 0;
}
	
	
