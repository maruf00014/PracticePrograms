
#include <iostream>
using namespace std;

class Quee
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

	Node *head = NULL;
	Node *tail = NULL;

	bool isEmpty()
	{
		return head == NULL;
	}

	int peek()
	{
		if (head != NULL)
		{
			return head->data;
		}
	}

	void add(int value)
	{
		Node *node = new Node(value);

		if (tail != NULL)
		{
			tail->next = node;
		}

		tail = node;

		if (head == NULL)
		{
			head = node;
		}
	}

	int remove()
	{
		int data = head->data;

		head = head->next;

		if (head == NULL)
		{
			tail = NULL;
		}

		return data;
	}
};

int main()
{
	Quee q;

	q.add(5);
	q.add(6);
	q.add(7);

	while (!q.isEmpty())
	{
		cout << q.remove() << " ";
	}
}