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
	LinkedQueue (const LinkedQueue<LQ> &c);
	~LinkedQueue();

	LinkedQueue &operator= (const LinkedQueue<LQ> &rhs);

	void Enqueue(LQ data);
	LQ	 Dequeue();

	LQ &Front();
	int Size();

	bool isEmpty();
	bool isFull();

private:
	LinkedList<LQ> mLinkedQueue;

	int mLQCap;
	int mLQSize;
};

#include "Queue.inc"
#endif


