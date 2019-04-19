#include<iostream>
#include <cstring>
using namespace std;
class Sales{
	private:
		char name[10];
		char id[18];
		int age;
	public:
		Sales(char *Name,char *ID,int Age);
		friend ostream &operator<<(ostream &os,Sales &s);
		friend istream &operator>>(istream &is,Sales &s);

};
Sales::Sales(char *Name,char *ID,int Age){
	strcpy(name,Name);
	strcpy(id,ID);
	age=Age;
}
ostream& operator<<(ostream &os,Sales &s){
	os<<s.name<<"\t";
	os<<s.id<<"\t";
	os<<s.age<<endl;
	return os;
}
istream &operator>>(istream &is,Sales &s){
	cout<<"输入雇员的姓名，身份证号，年龄"<<endl;
	is>>s.name>>s.id>>s.age;
	return is;
}
int main()
{
	Sales s1("杜康","214198012111711",40);
	cout<<s1;
	cout<<endl;
	cin>>s1;
	cout<<s1<<endl;
	return 0;
}
