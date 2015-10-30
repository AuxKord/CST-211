/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 4
* Filename:				Stack.h
************************************************************************/

#ifndef Stack_H
#define Stack_H

#include "LinkedList.h"

/************************************************************************
* Class: Stack
*
* Purpose:
*
* Constructors:
*	Stack (int stackSize)
*		Initializes m_size to 0 and m_stackSize to stackSize
*	Stack (const Stack<T> &c)
*	
*	~Stack()
*
*
* Operators:
*		Stack &operator= (const Stack<T> &rhs)
*
*
* Methods:
*	
*	T   Peek() const
*
*	int Size() const
*
*	bool isEmpty() const
*
*	bool  isFull() const
*
*
* Mutators:
*	void push (T data);
*
*	T	 Pop();
*
************************************************************************/
template <typename T>
class Stack
{
public:
	Stack (int maxSize);
	Stack (const Stack<T> &c);
	~Stack();

	Stack<T> &operator= (const Stack<T> &rhs);

	T   Peek() const;
	int Size() const;

	bool isEmpty() const;
	bool  isFull() const;

	void Push (T data);
	T	 Pop();


private:
	cLinkedList<T> m_listStack;

	int m_maxStackSize;
	int m_size;
};
#include "Stack.inc"
#endif


