#include <iostream>
#include <string>
using namespace std;
class Person{
private:
    string name;
	int age ;
	string sex;
public:
    Person(string n="none",int a=0,string s="male"):name(n),age(a),sex(s){cout<<"����Person..."<<endl;}
    ~Person(){cout<<"����Person..."<<endl;}
	void inputdata(){
		cout<<"����:";cin>>name;
		cout<<"����:";cin>>age;
		cout<<"�Ա�:";cin>>sex;
	}
	void display(){
		cout<<"����:"<<name<<"   "<<"����:"<<age<<"   "<<"�Ա�:"<<sex<<"   ";}
};
class Teacher:private Person{
private:
	string id;
	string title;
	string type;
public:
    Teacher(string n="none",int a=0,string s="��",string i="0",string ti="��ͨ��ʦ",string ty="ͨ��"):Person(n,a,s),id(i),title(ti),type(ty){cout<<"����Teacher..."<<endl;}
    ~Teacher(){cout<<"����Teacher..."<<endl;}
	void inputdata(){
		Person::inputdata();
		cout<<"��ʦ���:";cin>>id;
		cout<<"ְ��:";cin>>title;
		cout<<"ϵ��:";cin>>type;
	}
	void display(){
		Person::display();
		cout<<"��ʦ���:"<<id<<"   "<<"ְ��:"<<title<<"   "<<"ϵ��:"<<type<<"   "<<endl;
	}
};
class Student:private Person{
private:
	int number;
	int grade;
	string type;
public:
    Student(string n="none",int a=0,string s="��",int nu=0,int g=2016,string ty="ͨ��"):Person(n,a,s),number(nu),grade(g),type(ty){cout<<"����Student..."<<endl;}
    ~Student(){cout<<"����Student..."<<endl;}
	void inputdata(){
		Person::inputdata();
		cout<<"ѧ��:";cin>>number;
		cout<<"�꼶:";cin>>grade;
		cout<<"ϵ��:";cin>>type;
	}
	void display(){
		Person::display();
		cout<<"ѧ��:"<<number<<"   "<<"�꼶:"<<grade<<"   "<<"ϵ��:"<<type<<"   "<<endl;
	}
};
int main(){
    Teacher t1("������",40,"��","161111","�߼���ʦ","��Ϣ����");
	cout<<"ֱ�ӹ�����ʦ1��"<<endl;
	t1.display();
	cout<<"������ʦ1������:"<<endl;
	t1.inputdata();
	cout<<endl<<"************************************************************************"<<endl;
	t1.display();
	cout<<"************************************************************************"<<endl;
	Student s1("�򺣲�",21,"gay",1610480214,2016,"��Ϣ����");
	cout<<"ֱ�ӹ���ѧ��1��"<<endl;
	s1.display();
	cout<<"����ѧ��1������:"<<endl;
	s1.inputdata();
	cout<<endl<<"************************************************************************"<<endl;
	s1.display();
	cout<<endl;
	return 0;
}

