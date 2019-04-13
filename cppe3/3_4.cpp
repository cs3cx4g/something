#include <iostream>
#include <string>
using namespace std;
class Course{
	public:
		void setCno(int cNumber){cno=cNumber;}
		void setCredit(double crd){credit=crd;}
		void setCname(string cname){courseName=cname;}
		int getCno(){ return cno;}
		double getCredit(){return credit;}
		string getCourseName(){return courseName;}
		Course (int Cno=0,double cre=0,string cName=""){setCourse (Cno,cre,cName);}
		void display(){
			cout<<"课程号："<<cno<<"\t课程名称："<<courseName<<"\t学分："<<credit<<endl;}
		void setCourse(int Cno=0,double cre=0,string cName=""){
			cno=Cno; credit=cre; courseName=cName;
}
	private:
		int cno;
		double credit;
		string courseName;
};
class Student{
	public:
		void setSno(int Snumber){sno=Snumber;}
		void setStudentName(string Sname) {stuName=Sname;}
		int getSno() {return sno;}
		string getStudentName(){return stuName;}
		Student(int Sno=0,string SName=""){setStudent(Sno,SName);}
		void display(){cout<<"学号："<<sno<<"\t姓名："<<stuName<<endl;}
		void setStudent(int Sno=0,string Sname=""){sno=Sno;stuName=Sname;}
	private:
		int sno;
		string stuName;
};
class SelectCourse {
	public:
		SelectCourse(){maxNum=10;curNum=0;stu=new Student[maxNum];}
		SelectCourse(Course c,int mNum,int cNum,Student s[]):course(c),maxNum(mNum),curNum(cNum),stu(new Student[maxNum]){
			for(int i=0;i<cNum;i++)
				stu[i]=s[i];
}
		~SelectCourse(){delete []stu;}
		SelectCourse(const SelectCourse &o):course(o.course),maxNum(o.maxNum),curNum(o.curNum){
			stu=new Student[o.maxNum];
			for(int i=0;i<o.curNum;i++)
				stu[i]=o.stu[i];
}
		SelectCourse& operator=(const SelectCourse o){
			course=o.course;
			maxNum=o.maxNum;
			curNum=o.curNum;
			for (int i=0;i<o.curNum;i++)
				stu[i]=o.stu[i];
			return *this;
}
		void setCourse(Course c){course=c;}
		void setMaxNum(int n){maxNum=n;}
		void setCurNum(int n){curNum=n;}
		int getMaxNum(){return maxNum;}
		int getCurNum(){return curNum;}
		Course getCourse(){return course;}
		Student *getStudent(){return stu;}
		void setStudent(Student s[]) {stu=s;}
		Student getAt(int n) {return stu[n];}
		void appenStudent(Student s){
			if(curNum<maxNum)
				stu[curNum++]=s;
		}
		void display(){
			course.display();
			cout<<"最多选课人数："<<maxNum<<"\t实选人数："<<curNum<<endl;
			cout<<"选课学生名单："<<endl;
			for (int i=0;i<curNum;i++)
				stu[i].display();
		}
		private:
			int maxNum,curNum;
			Course course;
			Student *stu=0;
};
int main(){
	Course course;
	course.setCourse(101,3.5,"哲♂学的基本素养");
	Student s[2],s1;
	s[0].setStudent(1610480212,"万海波");
	s[1].setStudent(1610480213,"王汇峰");
	cout<<endl<<endl;
	SelectCourse sc(course,10,2,s);
	cout<<"------------------------sc------------------------"<<endl;
	sc.display();
	cout<<endl;
	SelectCourse sc2,sc1=sc;
	s1.setStudent(1610480214,"王璐");
	sc1.appenStudent(s1);
	cout<<"----------------------sc1(sc)---------------------"<<endl;
	sc1.display();
	cout<<endl;
	sc2=sc1;
	cout<<"----------------------sc2=sc1---------------------"<<endl;
	sc2.display();
	cout<<endl;
	return 0;
}
