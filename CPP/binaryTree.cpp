#include <iostream>
using namespace std;

class Node
{
  public:
	int data;
	Node *left;
	Node *right;

	Node(int data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
	void insert(int value)
	{
		if (value <= data)
		{
			if (left == NULL)
				left = new Node(value);

			else
				left->insert(value);
		}

		else
		{
			if (right == NULL)
				right = new Node(value);

			else
				right->insert(value);
		}
	}

	bool contains(int value)
	{
		if (value == data)
			return true;

		else if (value < data)
		{
			if (left == NULL)
				return false;

			else
				return left->contains(value);
		}

		else
		{
			if (right == NULL)
				return false;

			else
				return right->contains(value);
		}
	}

	void printInOrder()
	{
		if (left != NULL)
			left->printInOrder();

		cout << data << " ";

		if (right != NULL)
			right->printInOrder();
	}
};

int main()
{
	Node n(18);

	n.insert(4);
	n.insert(9);
	n.insert(7);
	n.insert(8);

	n.printInOrder();

	return 0;
}