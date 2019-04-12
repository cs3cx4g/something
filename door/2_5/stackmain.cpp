#include "stack.cpp"
#include <iostream>
using namespace std;
int main(){
	Stack s1;
	s1.push(1);
	s1.push(12);
	s1.push(32);
	int x1=s1.pop();
	int x2=s1.pop();
	int x3=s1.pop();
	cout<<x1<<"\t"<<x2<<"\t"<<x3<<endl;
	cout<<"目前栈内数据为:"<<s1.howMany()<<endl;
	return 0;
}
