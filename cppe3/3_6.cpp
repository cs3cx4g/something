#include <iostream>
#include <string>
using namespace std;
class Person{
private:
    string name;
	int age ;
	string sex;
public:
    Person(string n="none",int a=0,string s="male"):name(n),age(a),sex(s){cout<<"构造Person..."<<endl;}
    ~Person(){cout<<"析构Person..."<<endl;}
	void inputdata(){
		cout<<"姓名:";cin>>name;
		cout<<"年龄:";cin>>age;
		cout<<"性别:";cin>>sex;
	}
	void display(){
		cout<<"姓名:"<<name<<"   "<<"年龄:"<<age<<"   "<<"性别:"<<sex<<"   ";}
};
class Teacher:private Person{
private:
	string id;
	string title;
	string type;
public:
    Teacher(string n="none",int a=0,string s="无",string i="0",string ti="普通教师",string ty="通信"):Person(n,a,s),id(i),title(ti),type(ty){cout<<"构造Teacher..."<<endl;}
    ~Teacher(){cout<<"析构Teacher..."<<endl;}
	void inputdata(){
		Person::inputdata();
		cout<<"教师编号:";cin>>id;
		cout<<"职称:";cin>>title;
		cout<<"系别:";cin>>type;
	}
	void display(){
		Person::display();
		cout<<"教师编号:"<<id<<"   "<<"职称:"<<title<<"   "<<"系别:"<<type<<"   "<<endl;
	}
};
class Student:private Person{
private:
	int number;
	int grade;
	string type;
public:
    Student(string n="none",int a=0,string s="无",int nu=0,int g=2016,string ty="通信"):Person(n,a,s),number(nu),grade(g),type(ty){cout<<"构造Student..."<<endl;}
    ~Student(){cout<<"析构Student..."<<endl;}
	void inputdata(){
		Person::inputdata();
		cout<<"学号:";cin>>number;
		cout<<"年级:";cin>>grade;
		cout<<"系别:";cin>>type;
	}
	void display(){
		Person::display();
		cout<<"学号:"<<number<<"   "<<"年级:"<<grade<<"   "<<"系别:"<<type<<"   "<<endl;
	}
};
int main(){
    Teacher t1("兰西柱",40,"男","161111","高级教师","信息工程");
	cout<<"直接构建老师1："<<endl;
	t1.display();
	cout<<"设置老师1的内容:"<<endl;
	t1.inputdata();
	cout<<endl<<"************************************************************************"<<endl;
	t1.display();
	cout<<"************************************************************************"<<endl;
	Student s1("万海波",21,"gay",1610480214,2016,"信息工程");
	cout<<"直接构建学生1："<<endl;
	s1.display();
	cout<<"设置学生1的内容:"<<endl;
	s1.inputdata();
	cout<<endl<<"************************************************************************"<<endl;
	s1.display();
	cout<<endl;
	return 0;
}

