#include<iostream>
#define MAX 100
using namespace std;

class StackOfChar {
	private: 
			char stack[MAX];
			int topOfStack; 
	
	public: 
			StackOfChar(); //constructor
			void push(char ch);
			char pop();
			bool isEmpty();
			bool isFull();
};

StackOfChar::StackOfChar(){
	topOfStack = -1;
}

bool StackOfChar::isEmpty(){
	return (topOfStack == -1);
}

bool StackOfChar::isFull(){
	return (topOfStack == MAX -1);
}

void StackOfChar::push(char ch){
	//check if the stack is NOT FULL
	if(isFull()){
		//Stack is full at this point
		cout << "Cannot push - the stack is full" << endl;
	} else { 
		// THE ORDER OF OPERATIONS IS CRUCIAL
		
		
		// 1. increment the top of stack
		topOfStack++;
		// 2. push into the stack using the newly incremented top of stack
		stack[topOfStack] = ch;
		 
	}
}

char StackOfChar::pop(){
	//Declare a holder variable to stored the character to be returned
	char ch;
	//check if the stack is NOT EMPTY
	if(isEmpty()){
		//Stack is empty
		cout << " Cannot pop - the stack is empty" << endl;
	} else {
		// ORDER OF OPERATIONS IS KEY
		
		// 1. Remove the element pointed to by the top of stack
		ch = stack[topOfStack];
		// 2. Decrement the top of stack
		topOfStack--;
		// 3. Return the necessary the character
		return ch;
	}
}


int main(){
	StackOfChar S;
	S.push('A');
	S.push('v');
	S.push('i');
	S.push('l');
	S.push('e');
	cout << S.pop();
	cout << S.isEmpty();
	
	
	system("pause");
	return 0;
}


