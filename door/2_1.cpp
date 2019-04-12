#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Person{
	private:
		char *name;
		int age;
	public:
		Person(const Person &p);
		Person(char *Name,int Age);
		~Person();
		void setAge(int x){age=x;}
		void print();
};

Person::Person(char *Name,int Age){
	name=new char[strlen(Name)+1];
	strcpy(name,Name);
	age=Age;
	cout<<"constructor ...."<<endl;
}
Person::Person(const Person &p){
	name=new char[strlen(p.name)+1];
	strcpy(name,p.name);
	age=p.age;
	cout<<"Copy constructor ...."<<endl;
}
Person::~Person(){
	cout<<"destructor ..."<<age<<endl;
	delete name;
}
void Person::print(){
	cout<<name<<"\t The Address of name: "<<&*name<<endl;
}
int main(){
	Person p1("张勇",21);
	Person p2=p1;
	p1.setAge(1);
	p2.setAge(2);
	p1.print();
	p2.print();
	return 0;
}
