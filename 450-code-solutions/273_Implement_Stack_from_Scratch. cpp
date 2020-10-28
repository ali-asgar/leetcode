// https://www.tutorialspoint.com/javaexamples/data_stack.htm
// https://www.geeksforgeeks.org/stack-data-structure-introduction-program/

// Also
// https://www.geeksforgeeks.org/stack-in-cpp-stl/
// https://www.geeksforgeeks.org/stack-push-and-pop-in-c-stl/
// https://www.geeksforgeeks.org/stack-top-c-stl/
// https://www.geeksforgeeks.org/stack-empty-and-stack-size-in-c-stl/

/* C++ program to implement basic stack operations */
#include <bits/stdc++.h> 

using namespace std; 

#define MAX 1000 

class Stack { 
	int top; 

public: 
	int a[MAX]; // Maximum size of Stack 

	Stack() { top = -1; } 
	void push(int x)
    { 
    	if (top >= (MAX - 1)) { cout << "Stack Overflow"; return; } 
    	a[++top] = x; 
    	cout << x << " pushed into stack\n"; 
    } 
	int pop()
	{ 
    	if (top < 0) { cout << "Stack Underflow"; return 0; }
    	return a[top--]; 
    } 
	int peek()
	{ 
    	if (top < 0) { cout << "Stack is Empty"; return 0; } 
    	return a[top]; 
    } 
	bool isEmpty() { return (top < 0); } 
}; 

// Driver program to test above functions 
int main() 
{ 
	class Stack s; 
	s.push(10); 
	s.push(20); 
	s.push(30); 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.peek() << " is Peek of Stack\n";
	cout << "Stack isEmpty ? " << s.isEmpty();

	return 0; 
} 

/*
10 pushed into stack                                                                                                                                                               
20 pushed into stack                                                                                                                                                               
30 pushed into stack                                                                                                                                                               
30 Popped from stack                                                                                                                                                               
20 is Peek of Stack                                                                                                                                                                
Stack isEmpty ? 0 
*/
