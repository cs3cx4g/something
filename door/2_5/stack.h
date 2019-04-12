#ifndef Stack_h
#define Stack_h
class Stack{
	private:
		int *data;
		int top;
		int maxSize;
	public:
		Stack(int stacksize=10);
		~Stack();
		void push(int x);
		int pop();
		int howMany();
};
#endif
