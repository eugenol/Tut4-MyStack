#pragma once
class Node
{
private:
	int value;
	Node* Prev;
public:

	Node(int val, Node* p = nullptr) : value(val), Prev(p)
	{
		value = val;
		Prev = p;
	}

	~Node()
	{
	}

	void setValue(int val)
	{
		value = val;
	}

	int getValue()
	{
		return value;
	}

	void setPrevious(Node* p)
	{
		Prev = p;
	}

	Node* getPrevious()
	{
		return Prev;
	}
};

