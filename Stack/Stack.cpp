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
	Head = NULL;
}

CStack::CStack(int sz)
{
	max_size = sz;
	current_size = 0;
	Head = NULL;
}

CStack::~CStack()
{
	Head = NULL;
}

bool CStack::Push(int value)
{
	if (max_size != -1 && current_size < max_size)
	{
		struct Node* curr = new Node;
		curr->value = value;
		curr->Prev = Head;
		Head = curr;
		return true;
	}
	else
		return false;
}