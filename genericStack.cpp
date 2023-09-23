#include<iostream>
#define MAX 50
using namespace std;

//use the template C++ feature for a general data type
template<class Type>

//define the class
class Stack {
	private: 
			Type stack[MAX];
			int topOfStack;
	
	public:
			Stack(); // constructor
			bool isEmpty();
			bool isFull();
			void push(Type x);
			Type pop();
};

//define the methods
template<class Type>

Stack<Type>::Stack(){
	topOfStack = -1;
}

template<class Type>
bool Stack<Type>::isEmpty(){
	return (topOfStack == -1);
}

template<class Type>
bool Stack<Type>::isFull(){
	return (topOfStack == MAX - 1);
}

template<class Type>
void Stack<Type>::push(Type x){
	if(!isFull()){
		//increment the top of stack - making it 0
		topOfStack++;
		//store the value of the parameter into the top of the stack
		stack[topOfStack] = x;
	} else { //Stack is full
		//display a message telling this
		cout << "Cannot push - stack is full" << endl;
	}
}

template<class Type>
Type Stack<Type>::pop(){
	//declare a variable to return with the popped item
	Type item;
	if(!isEmpty()){
		//Grab the value at the top of the stack and store it in the variable above
		item = stack[topOfStack];
		//Decrement the top of the stack
		topOfStack--;
		//Return the popped item in the local variable
		return item;
	} else { //stack is empty
		//display a message telling this
		cout << " Cannot pop - the stack is empty" << endl;
	}
}


//main function
int main(){
	//declare two stacks - one for integers and the other for characters
	Stack<int> stackOfInt;
	Stack<char> stackOfChar;
	
	//populate the stack of integers 
	stackOfInt.push(2);
	stackOfInt.push(10);
	
	//populate the stack of characters
	stackOfChar.push('A');
	stackOfChar.push('v');
	stackOfChar.push('i');
	stackOfChar.push('l');
	stackOfChar.push('e');
	
	//pop the the two stacks and display each pop
	cout << stackOfInt.pop() << " " << stackOfChar.pop();
	return 0;
}

