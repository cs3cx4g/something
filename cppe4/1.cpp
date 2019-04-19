#include <iostream>
#include <string>
using namespace std;
class Employee{
	public:
		Employee(string Name,string id){name=Name; Id=id;}
		string getName(){return name;}
		string getID(){return Id;}
		float getSalary(){return 0.0;}
		void print(){cout<<"姓名："<<name<<"\t\t编号："<<Id<<endl;}
	private:
		string name;
		string Id;
};
class Manager:public Employee{
	public:
		Manager(string Name,string id,float s=0.0):Employee(Name,id){
			weeklySalary=s;
		}
		void setSalary(float s){weeklySalary=s;}
		float getSalary(){return weeklySalary;}
		void print(){
			cout<<"经理："<<getName()<<"\t\t编号："<<getID()<<"\t\t周工资"<<getSalary()<<endl;
		}
	private:
		float weeklySalary;
};
int main(){
	Employee e("黄春秀","NO0009"),*pM;
	Manager m("刘大海","NO0001",128);
	m.print();
	pM=&m;
	pM->print();
	Employee &rM=m;
	rM.print();
	return 0;
}	
