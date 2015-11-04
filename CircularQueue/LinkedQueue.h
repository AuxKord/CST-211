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

template <typename LQ>
class LinkedQueue
{
public:
	LinkedQueue (int LQCap);
	LinkedQueue (const LinkedQueue &c);
	~LinkedQueue();

	LinkedQueue &operator= (const LinkedQueue &rhs);

	void Enqueue(LQ data);
	LQ	 Dequeue();

	LQ &Front();
	int Size();

	bool isEmpty();
	bool isFull();

private:
	LinkedList<LQ> mLinkedQueue;

	int LQCap;
	int LQSize;
};

#include "Queue.inc"
#endif


