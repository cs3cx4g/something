#include "stack.h"
#include <iostream>
using namespace std;
Stack::Stack(int stacksize){
	if(stacksize>0){
		maxSize=stacksize;
		data=new int[stacksize];
		for(int i=0;i<maxSize;i++)
			data[i]=0;
	}
	else{
		data=0;
		maxSize=0;
	}
	top=0;
}
Stack::~Stack(){
	delete[] data;
}
void Stack::push(int x){
	if (top<maxSize){
		data[top]=x;
		top++;
	}
	else{
		cout<<"堆栈已满，不能再入栈数据："<<x<<endl;
	}
}
int Stack::pop(){
	if(top<=0){
		cout<<"堆栈已空！"<<endl;
		exit(1);
	}
	top--;
	return data[top];
}
int Stack::howMany(){
	return top;
}
