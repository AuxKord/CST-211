/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 5
* Filename:				LinkedQueue.h
************************************************************************/
#ifndef LinkedQueue_H
#define LinkedQueue_H

#include "LinkedList.h"
#include "Exception.h"

/************************************************************************
* Class: LinkedQueue
*
* Purpose:
*
* Constructors:
*	LinkedQueue (int LQCap)
*
*	LinkedQueue (const LinkedQueue<LQ> &c)
*
*	~LinkedQueue()
*
*
* Operators:
*	LinkedQueue &operator= (const LinkedQueue<LQ> &rhs)
*
*
* Methods:
*	LQ &Front()
*
*	int Size()
*
*	bool isEmpty() 
*
*	bool isFull() 
*
*
* Mutators:
*	void Enqueue(LQ data)
*
*	LQ	 Dequeue()
8
************************************************************************/

template <typename LQ>
class LinkedQueue
{
public:
	LinkedQueue (int LQCap);
	LinkedQueue (const LinkedQueue<LQ> &c);
	~LinkedQueue() {};

	LinkedQueue &operator= (const LinkedQueue<LQ> &rhs);

	void Enqueue(LQ data);
	LQ	 Dequeue();

	LQ &Front() { return *mLinkedQueue.Begin(); }
	int Size() { return mLQSize; }

	bool isEmpty() { return mLQSize == 0; }
	bool isFull() { return mLQSize == mLQCap; }

private:
	LinkedList<LQ> mLinkedQueue;

	int mLQCap;
	int mLQSize;
};

#include "Queue.inc"
#endif


