#include <iostream>
#include <cstring>
using namespace std;
class X{
	private:
		char *s;
	public:
		X(const char *b){
			s=new char[sizeof(b)+1];
			strcpy(s,b);
		}
		X(const X &p);
		~X(){delete s;}
		void display(){cout<<"s="<<s<<endl;}
};
X::X(const X &p){
	s=new char[strlen(p.s)+1];
	strcpy(s,p.s);
	}
int main(){
	X x1("ok");
	X x2(x1);
	X x3=x1;
	x2.display();
	x3.display();
	return 0;
}
