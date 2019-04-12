#include <iostream>
using namespace std;
class A {
		int x;
	public:
		A(int i=0):x(i) {cout<<"Construct A----"<<x<<endl;};
		~A() { cout<<"Des A----"<<x<<endl;};
};
class B {
		int y;
	public:
		B(int i):y(i) {cout<<"Construct B----"<<y<<endl;};
		~B(){cout<<"Des B----"<<y<<endl;};
};
class C{
		int z;
	public:
		C(int i):z(i) {cout<<"Construct C----"<<z<<endl;};
		~C() {cout<<"Des C----"<<z<<endl;};
};
class D : public B{
	public:
		C c1,c2;
		A a0,a4;
		D():a4(4),c2(2),c1(1),B(1){
			cout<<"Construct D----5"<<endl;
		};
		~D(){cout<<"Des D----5"<<endl;};
};
int main(){
	D d;
	return 0;
}
	
