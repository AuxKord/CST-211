/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 5
* Filename:				CircularQueue.h
************************************************************************/
#ifndef CircularQueue_H
#define CircularQueue_H

#include "Array.h"
#include "Exception.h"

/************************************************************************
* Class: CircularQueue
*
* Purpose:
*
* Constructors:
*	CircularQueue (int CQCap)
*
*	CircularQueue (const CircularQueue<CQ> &c)
*
*	~CircularQueue()
*
*
* Operators:
*	CircularQueue &operator= (const CircularQueue<CQ> &rhs)
*
*
* Methods:
*	CQ &Front()
*
*	int Size() 
*
*	bool isEmpty() 
*
*	bool isFull()
*
*
* Mutators:
*	void Enqueue (CQ data)
*
*	CQ	 Dequeue()
*
************************************************************************/
template <typename CQ>
class CircularQueue
{
public:
	CircularQueue (int CQCap);
	CircularQueue (const CircularQueue<CQ> &c);
	~CircularQueue() {};

	CircularQueue &operator= (const CircularQueue<CQ> &rhs);

	void Enqueue (CQ data);
	CQ	 Dequeue();

	CQ &Front();
	int Size() { return mCQSize; }

	bool isEmpty() { return mCQSize == 0; }
	bool isFull() { return mCQSize == mCQCap; }

private:
	Array<CQ> mCircularQueue;

	int mCQCap;
	int mCQSize;
};

#include "Queue.inc"
#endif
