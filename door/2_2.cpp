#include <iostream>
#include <string>
using namespace std;
class Book {
	private:
		string bkName;
		double price;
		static int number;
		static double totalPrice;
	public:
		Book() { bkName=""; price=0; number++;}
		Book(string , double);
		~Book();
		void setName(string bname){bkName=bname;}
		void setPrice(double bprice){
			totalPrice-=price;
			price=bprice;
			totalPrice+=price;
		}
		double getPrice(){return price;}
		string getName() {return bkName;}
		static int getNumber() {return number;}
		static double getTotalPrice() {return totalPrice;}
		void display();
};
Book::Book(string name,double Price){
	bkName=name;
	price=Price;
	number++;
	totalPrice+=price;
}
Book::~Book(){
	number--;
	totalPrice-=price;
}
void Book::display(){
	cout<<"book name :"<<bkName<<" "<<"price:"<<price<<endl;
	cout<<"number:"<<number<<" "<<"totalPrice:"<<totalPrice<<endl;
	cout<<"call static function "<<getNumber()<<endl;
}
int Book::number=0;
double Book::totalPrice=0;
int main(){
	Book b1("C++程序设计",32.5),b2;
	b2.setName("数据库系统原理");
	b2.setPrice(23);
	cout<<b1.getName()<<"\t"<<b1.getPrice()<<endl;
	cout<<b2.getName()<<"\t"<<b2.getPrice()<<endl;
	cout<<"总共: "<<b1.getNumber()<<"\t本书"
		<<"\t 总价：  "<<b1.getTotalPrice()<<"\t元"<<endl;
	{
		Book b3("数据库系统原理",23);
		cout <<"总共："<<b1.getNumber()<<"\t本书"
			<<"\t总价： "<<b1.getTotalPrice()<<"\t元"<<endl;
	}
	cout<<"总共："<<Book::getNumber()<<"\t本书"
		<<"\t总价： "<<Book::getTotalPrice()<<"\t元"<<endl;
	b2.display();
	return 0;
}
