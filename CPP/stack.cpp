
#include <iostream>
using namespace std;

class Stack
{
  public:
	class Node
	{
	  public:
		int data;
		Node *next;

	  public:
		Node(int data)
		{
			this->data = data;
			next = NULL;
		}
	};

public:
	Node *top = NULL;

	bool isEmpty()
	{
		return top == NULL;
	}

	int peek()
	{
		if (top != NULL)
		{
			return top->data;
		}
	}

	void push(int value)
	{
		Node *node =  new Node(value);
			node->next = top;
	
		  top = node;
		  
		  
	}

	int pop()
	{
		int data = top->data;

		top = top->next;


		return data;
	}
	
	
};

int main()
{
	
	Stack s;
	s.push(3);
	s.push(2);
	s.push(1);
	
	while(!s.isEmpty()){
	cout<< s.pop()<<" ";
	
	}
}