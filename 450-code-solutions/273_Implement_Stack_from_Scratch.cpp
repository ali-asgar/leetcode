// https://www.tutorialspoint.com/javaexamples/data_stack.htm
// https://www.geeksforgeeks.org/stack-data-structure-introduction-program/
// Also https://www.geeksforgeeks.org/stack-in-cpp-stl/

/* C++ program to implement basic stack operations */
#include <iostream>
//#include <stack>
using namespace std; 

class Stack { 
	int topIndex; 

public: 
	int a[1000];

	Stack()      { topIndex = -1; } 
	bool empty() { return (topIndex < 0); } 
	int size()
	{
	    if (topIndex < 0) { cout << "\nStack is Empty"; return 0; } 
	    return topIndex+1;
	}
	int top()
	{
	    if (topIndex < 0) { cout << "\nStack is Empty"; return 0; } 
	    return a[topIndex];
	}
	void push(int x)
	{ 
    	    if (topIndex > 1000) { cout << "\nStack Overflow"; return; } 
    	    a[++topIndex] = x; 
    	}
	void pop()
	{ 
    	    if (topIndex < 0) { cout << "\nStack Underflow"; return; }
    	    topIndex--; 
    	}
}; 

void showstack(class Stack s) //stack <int> s) 
{ 
	while (!s.empty()) 
	{ 
		cout << '\t' << s.top(); 
		s.pop(); 
	} 
	cout << '\n'; 
} 

int main () 
{ 
	class Stack s; // stack <int> s; 
	s.push(10); 
	s.push(30); 
	s.push(20); 
	s.push(5); 
	s.push(1); 

	cout << "The stack is : "; 
	showstack(s); 

	cout << "\ns.size() : " << s.size(); 
	cout << "\ns.top() : " << s.top(); 


	cout << "\ns.pop() : "; 
	s.pop(); 
	showstack(s); 

	return 0; 
} 

/*
The stack is :  1       5       20      30      10                                                                                                                                 
                                                                                                                                                                                   
s.size() : 5                                                                                                                                                                       
s.top() : 1                                                                                                                                                                        
s.pop() :       5       20      30      10   
*/
