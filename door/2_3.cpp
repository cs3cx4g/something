class X{
	private:
		int a=0,&b;
		const int c;
		void setA(int i){a=i;}
		X(int i){a=i;}
	public:
		int X(){a=b=c=0;}
		X(int i,int j,int k) {a=i;b=j; c=k;}
		static void setB(int k) {b=k;}
		setC(int k) const {c=c+k;}
	};
void main(){
	X x1;
	X x2(3);
	X x3(1,2,3);
	x1.setA(3);
} 
