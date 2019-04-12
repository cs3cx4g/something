#include <iostream>
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
		void print(){ cout<<"基本工资："<<getWage()<<endl<<"岗位津贴："<<getSubsidy()<<endl<<"房租："<<getRent()<<endl<<"水费："<<getWaterFee()<<endl<<"电费："<<getElecFee()<<endl<<"实发工资"<<RealSalary()<<endl; };
};
int main(){
	Salary door(2000,1000,200,222,123.4);
	door.print();
	cout<<"设置基本工资："<<endl;
	double x;
	cin>>x;
	door.setWage(x);
	door.print();
	return 0;
}
	

