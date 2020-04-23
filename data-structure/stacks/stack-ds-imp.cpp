#include <iostream>

#define num 20

class stack{
private:
	int top;
	int a[num];

public:
	stack() {top =-1;}
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool stack::push(int x){
	if (top >= (num -1)){
		std::cout<<"stack overflow";
		return false;
	} else {
		a[++top] = x;
		std::cout<<x<<" push "<<std::endl;
		return true;
	}
}

int stack::pop(){
	if (top<0){
		std::cout<<"stack is empty";
		return 0;
	} else {
		int x = a[top--];
		return x;
	}
}

bool stack::isEmpty(){
	if (top > 0){
		std::cout<<"stack is not empty";
		return false;
	} else {
		return true;
	}
}

int stack::peek(){
	if (top<=0){
		std::cout<<"stack is empty";
		return 0;
	} else {
		int x = a[top];
		return x;
	}
}

/* example */
int main(){
	class stack s;
	s.push(20);
	s.push(40);
	s.push(30);
	std::cout<<s.pop()<<std::endl;
	std::cout<<s.pop()<<std::endl;
	std::cout<<s.pop()<<std::endl;
	std::cout<<s.pop()<<std::endl;
	return 0;
}
