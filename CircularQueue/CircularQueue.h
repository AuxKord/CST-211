/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 5
* Filename:				CircularQueue.h

Canonical functions - The constructor will take one parameter that will be the size of the queue.



Enqueue - Puts the data item at the end (tail) of the queue.

Dequeue - Removes and returns the data item at the front of the queue.

Front - Returns a reference to the data at the front of the queue. This will allow the consumer to modify the element at the front of the queue.

Size – Returns the number of items currently in the queue.

isEmpty - Returns true if the stack is empty.

isFull - Returns true if the queue is full.
************************************************************************/
#ifndef CircularQueue_H
#define CircularQueue_H

#include "Array.h"
#include "Exception.h"

template <typename CQ>
class CircularQueue
{
public:
	CircularQueue (int CQCap);
	CircularQueue (const CircularQueue<CQ> &c);
	~CircularQueue();

	CircularQueue &operator= (const CircularQueue<CQ> &rhs);

	void Enqueue (CQ data);
	CQ	 Dequeue();

	CQ &Front();
	int Size();

	bool isEmpty();
	bool isFull();

private:
	Array<CQ> mCircularQueue;

	int mCQCap;
	int mCQSize;
};

#include "Queue.inc"
#endif
