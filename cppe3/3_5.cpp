#include <iostream>
#include <string>
using namespace std;
class Publication{
private:
    string title;
	string name;
	float price;
	string date;
public:
    Publication(){
        title="none";
        name="none";
        price=0;
        date="2019/4/04";
        cout<<"Publication构造...."<<endl;
        }
    Publication(string t,string n,float p,string d){
        title=t;
        name=n;
        price=p;
        date=d;
        cout<<"Publication构造...."<<endl;
        }
    ~Publication(){cout<<"Publication析构...."<<endl;}
	void inputData(){
		cout<<"标题:";cin>>title;
		cout<<"出版社名称:";cin>>name;
		cout<<"单价:";cin>>price;
		cout<<"出版日期:";cin>>date;}
	void display(){
		cout<<"标题:"<<title<<"   "<<"出版社名称:"<<name<<"   "<<"单价:"<<price<<"   "<<"日期:"<<date<<"   ";}
};
class Book:private Publication{
private:
	int page;
public:
    Book(string t="none",string n="none",float p=0,string d="2019/4/04",int pa=0):Publication(t,n,p,d),page(pa){cout<<"Book构造...."<<endl;}
    ~Book(){cout<<"Book析构...."<<endl;}
	void inputData(){
		Publication::inputData();
		cout<<"page:";cin>>page;
	}
	void display(){
		Publication::display();
		cout<<"page:"<<page<<"   "<<endl;
	}
};
class CD :private Publication{
	private:
	int playtime;
public:
    CD(string t="none",string n="none",float p=0,string d="2019/4/04",int pl=0):Publication(t,n,p,d),playtime(pl){cout<<"CD构造...."<<endl;}
    ~CD(){cout<<"CD析构...."<<endl;}
	void inputData(){
		Publication::inputData();
		cout<<"playtime:";cin>>playtime;
	}
	void display(){
		Publication::display();
		cout<<"playtime:"<<playtime<<"   "<<endl;
	}
};
int main(){
	Book book1("哲♂学的基本操作","新日暮里出版社",10.88,"2019/4/10",88);
	cout<<"直接构建书1："<<endl;
	book1.display();
	cout<<"设置书1的内容:"<<endl;
	book1.inputData();

	cout<<endl<<"************************************************************************"<<endl;
	book1.display();
	cout<<"************************************************************************"<<endl;
	CD cd1("摔跤基本指南","新日暮里出版社",88.99,"2019/4/10",100);
	cout<<"直接构建CD1："<<endl;
	cd1.display();
	cout<<"设置CD1的内容:"<<endl;
	cd1.inputData();
	cout<<endl<<"************************************************************************"<<endl;
	cd1.display();
	cout<<endl;
	return 0;
}
