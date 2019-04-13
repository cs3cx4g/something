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
        cout<<"Publication����...."<<endl;
        }
    Publication(string t,string n,float p,string d){
        title=t;
        name=n;
        price=p;
        date=d;
        cout<<"Publication����...."<<endl;
        }
    ~Publication(){cout<<"Publication����...."<<endl;}
	void inputData(){
		cout<<"����:";cin>>title;
		cout<<"����������:";cin>>name;
		cout<<"����:";cin>>price;
		cout<<"��������:";cin>>date;}
	void display(){
		cout<<"����:"<<title<<"   "<<"����������:"<<name<<"   "<<"����:"<<price<<"   "<<"����:"<<date<<"   ";}
};
class Book:private Publication{
private:
	int page;
public:
    Book(string t="none",string n="none",float p=0,string d="2019/4/04",int pa=0):Publication(t,n,p,d),page(pa){cout<<"Book����...."<<endl;}
    ~Book(){cout<<"Book����...."<<endl;}
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
    CD(string t="none",string n="none",float p=0,string d="2019/4/04",int pl=0):Publication(t,n,p,d),playtime(pl){cout<<"CD����...."<<endl;}
    ~CD(){cout<<"CD����...."<<endl;}
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
	Book book1("�ܡ�ѧ�Ļ�������","����ĺ�������",10.88,"2019/4/10",88);
	cout<<"ֱ�ӹ�����1��"<<endl;
	book1.display();
	cout<<"������1������:"<<endl;
	book1.inputData();

	cout<<endl<<"************************************************************************"<<endl;
	book1.display();
	cout<<"************************************************************************"<<endl;
	CD cd1("ˤ�ӻ���ָ��","����ĺ�������",88.99,"2019/4/10",100);
	cout<<"ֱ�ӹ���CD1��"<<endl;
	cd1.display();
	cout<<"����CD1������:"<<endl;
	cd1.inputData();
	cout<<endl<<"************************************************************************"<<endl;
	cd1.display();
	cout<<endl;
	return 0;
}
