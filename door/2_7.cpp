#include <iostream>
#include <string>
using namespace std;
class Salary{
	private:
		double Wage,Subsidy,Rent,WaterFee,ElecFee;
	public:
		Salary(double w,double s,double r,double wt,double e) {
			Wage=w;
			Subsidy=s;
			Rent=r;
			WaterFee=wt;
			ElecFee=e;
		};
		Salary (){
			Wage=0;
			Subsidy=0;
			Rent=0;
			WaterFee=0;
			ElecFee=0;
		};
		void setWage(double w){Wage=w;};
		void setSubsidy(double s){Subsidy=s;};
		void setRent(double r){Rent=r;};
		void setWaterFee(double wt){WaterFee=wt;};
		void setElecFee(double e){ElecFee=e;};
		double getWage(){return Wage;};
		double getSubsidy(){return Subsidy;};
		double getRent(){return Rent;};
		double getWaterFee(){return WaterFee;};
		double getElecFee(){return ElecFee;};
		double RealSalary(){ return Wage+Subsidy-Rent-WaterFee-ElecFee;};
		void print(){ cout<<"基本工资："<<Wage<<endl<<"岗位津贴："<<Subsidy<<endl<<"房租："<<Rent<<endl<<"水费："<<WaterFee<<endl<<"电费："<<ElecFee<<endl<<"实发工资"<<RealSalary()<<endl; };
};
class Worker{
	private:
		string name,dept;
		int age;
		Salary salary;
		static int sum;
	public:
		Worker(string n,int a,string d,double w,double s,double r,double wt,double e){
			name=n;
			age=a;
			dept=d;
			salary.setWage(w);
			salary.setSubsidy(s);
			salary.setRent(r);
			salary.setWaterFee(wt);
			salary.setElecFee(e);
			sum++;
			};
		Worker(){name="none";age=0;dept="none";sum=sum+1;};
		~Worker(){sum--;};
		void setname(string n){name=n;};
		void setage(int a){age=a;};
		void setdept(string d){dept=d;};
		void setsalary(double w,double s,double r,double wt,double e){
			salary.setWage(w);
			salary.setSubsidy(s);
			salary.setRent(r);
			salary.setWaterFee(wt);
			salary.setElecFee(e);
		};
		string getname(){return name;};
		int getage(){return age;};
		string getdept(){return dept;};
		Salary getsalary(){return salary;};
		static int getsum(){return sum;};
		void print(){
			cout<<"姓名："<<name<<endl<<"年龄："<<age<<endl<<"工作部门："<<dept<<endl;
			 cout<<"基本工资："<<salary.getWage()<<endl<<"岗位津贴："<<salary.getSubsidy()<<endl<<"房租："<<salary.getRent()<<endl<<"水费："<<salary.getWaterFee()<<endl<<"电费："<<salary.getElecFee()<<endl<<"实发工资"<<getsalary().RealSalary()<<endl<<"总人数："<<getsum()<<endl; };
			
};
int Worker::sum=0;
int main(){
	Worker door("王璐",23,"cumtb",20000,1000,200,222,123.4);
	door.print();
	string name,dept;
	int age;
	double w,s,r,wt,e;
	cout<<"请输入 姓名 年龄 工作部门 基本工资 岗位津贴 房租 水费 电费"<<endl;
	cin>>name>>age>>dept>>w>>s>>r>>wt>>e;
	cout<<endl<<endl;
	Worker van(name,age,dept,w,s,r,wt,e);
	van.print();
	return 0;
}
