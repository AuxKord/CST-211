/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 4
* Filename:				Stack.inc
************************************************************************/

#ifndef Stack_i
#define Stack_i

#include "Stack.h"
#include "Exception.h"

/**************************************************************
* Stack<T>::Stack (int stackSize) 
*
*		Purpose: Default Constructor. Initializes m_node
*				 to 0.
****************************************************************/
template<typename T>
Stack<T>::Stack (int maxSize) : m_size ( 0 ), m_maxStackSize ( maxSize )
{
}

/**************************************************************
* Stack<T>::Stack(const Stack<T>& c)
*
*		Purpose: 
****************************************************************/
template<typename T>
Stack<T>::Stack(const Stack<T>& c) : m_size ( c.m_size ), m_maxStackSize ( c.m_maxStackSize ), m_listStack ( c.m_listStack )
{
}

/**************************************************************
* Stack & Stack<T>::operator=(const Stack<T>& rhs)
*
*		Purpose:
****************************************************************/
template<typename T>
Stack<T> & Stack<T>::operator=(const Stack<T>& rhs)
{
		m_size = rhs.m_size;
		m_maxStackSize = rhs.m_maxStackSize;
		m_listStack = rhs.m_listStack;
	return *this;
}

/**************************************************************
* Stack<T>::~Stack()
*
*		Purpose: Calls the LinkedList Purge function.
****************************************************************/
template<typename T>
Stack<T>::~Stack()
{
	m_listStack.Purge();
}

/**************************************************************
* T Stack<T>::Peek() const
*
*		Purpose: Return the first/top element in/on the stack.
*				 Does not remove any element.
****************************************************************/
template<typename T>
T Stack<T>::Peek() const
{
	if (isEmpty())
		throw cException("Cannot peek an empty stack.");
	return (m_listStack.Last().GetData());
}

/**************************************************************
* int Stack<T>::Size() const
*
*		Purpose: Returns the size of the stack.
****************************************************************/
template<typename T>
int Stack<T>::Size() const
{
	return m_size;
}

/**************************************************************
* bool Stack<T>::isEmpty() const
*
*		Purpose: Returns true if the stack is empty.
****************************************************************/
template<typename T>
bool Stack<T>::isEmpty() const
{
	return (m_size == 0);
}

/**************************************************************
* bool Stack<T>::isFull() const
*
*		Purpose: Returns true if the stack is full.
****************************************************************/
template<typename T>
bool Stack<T>::isFull() const
{
	return (m_size == m_maxStackSize);
}

/**************************************************************
* void Stack<T>::push(T data)
*
*		Purpose: Pushes elements from T data ontop of the 
*				 stack.
****************************************************************/
template<typename T>
void Stack<T>::Push(T data)
{
	if (isFull())
		throw cException("Error - Cannot Push if the Stack is Full.");
	m_listStack.Append(&data);
	++m_size;
}

/**************************************************************
* T Stack<T>::Pop()
*
*		Purpose: Pops or removes the top element of the stack
*				 and returns it.
****************************************************************/
template<typename T>
T Stack<T>::Pop()
{
	if (isEmpty())
		throw cException("Error - Cannot Pop if the Stack is Empty.");
	--m_size;
	return m_listStack.Extract(*(m_listStack.End())).GetData();
}


#endif