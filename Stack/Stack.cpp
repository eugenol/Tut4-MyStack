// Stack.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Stack.h"


// This is an example of an exported variable
//STACK_API int nStack=0;

// This is an example of an exported function.
//STACK_API int fnStack(void)
//{
//	return 42;
//}

// This is the constructor of a class that has been exported.
// see Stack.h for the class definition
CStack::CStack()
{
	max_size = -1;
	current_size = 0;
	Head = nullptr;
}

CStack::CStack(int sz)
{
	max_size = sz;
	current_size = 0;
	Head = nullptr;
}

CStack::~CStack()
{
	Head = nullptr;
}

bool CStack::Push(const int& value)
{
	if (!isFull())
	{
		Node* curr = new Node(value, Head);
		Head = curr;
		current_size++;
		return true;
	}
	else
		return false;
}

bool CStack::Pop(int& value)
{
	if (!isEmpty())
	{
		Node* curr = Head;
		Head = curr->getPrevious();
		value = curr->getValue();
		delete curr;
		return true;
	}
	else
		return false;
}

bool CStack::Peek(int& value)
{
	if (!isEmpty())
	{
		Node* curr = Head;
		value = curr->getValue();
		return true;
	}
	else
		return false;
}

bool CStack::isFull()
{
	if (current_size == max_size)
		return true;
	else
		return false;
}

bool CStack::isEmpty()
{
	if (Head == nullptr)
		return true;
	else
		return false;
}