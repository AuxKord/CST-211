/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 5
* Filename:				Queue.inc
************************************************************************/
#ifndef Queue_i
#define Queue_i
#include "CircularQueue.h"
#include "LinkedQueue.h"
/**********************************************************************
						**Circular Queue***	
************************************************************************/


template <typename CQ>
CircularQueue<CQ>::CircularQueue(int CQCap) : mCircularQueue (CQCap), mCQCap (CQCap), mCQSize (0)
{

}

template<typename CQ>
CircularQueue<CQ>::CircularQueue(const CircularQueue & c) : mCircularQueue (c.mCircularQueue), mCQCap (c.mCQCap),
															mCQSize (c.mCQSize)
{
}

template<typename CQ>
CircularQueue<CQ>::~CircularQueue()
{
}

template<typename CQ>
CircularQueue<CQ> & CircularQueue<CQ>::operator=(const CircularQueue<CQ> &rhs)
{
		mCQSize		   = rhs.mCQSize;
		mCQCap		   = rhs.mCQCap;
		mCircularQueue = rhs.mCircularQueue;
	return *this;
}

template<typename CQ>
void CircularQueue<CQ>::Enqueue(CQ data)
{
	if (isFull())
		throw cException("Enqueue - Error: Circular Queue is Full!");
	else
			mCircularQueue[data];
	++mCQSize;
}

template<typename CQ>
CQ CircularQueue<CQ>::Dequeue()
{
	if (isEmpty())
		throw cException("Dequeue - Error: Circular Queue is Empty!");
	else
	{
		CQ TempD = mCircularQueue[0];
		mCircularQueue.SetStartIndex(mCircularQueue.GetLength() - 1);
		--mCQSize;
		return TempD;
	}
}

template<typename CQ>
CQ & CircularQueue<CQ>::Front()
{
	if (!isEmpty())
		return mCircularQueue[0];
	else
		throw cException("Front - Error: Circular Queue is Empty!");
}

template<typename CQ>
int CircularQueue<CQ>::Size()
{
	return mCQSize;
}

template<typename CQ>
bool CircularQueue<CQ>::isEmpty()
{
	if (mCQSize == 0)
		return true;
}

template<typename CQ>
bool CircularQueue<CQ>::isFull()
{
	if (mCQSize == mCQCap)
		return true;
}


/**********************************************************************
						**Linked Queue***
************************************************************************/
template <typename LQ>
LinkedQueue<LQ>::LinkedQueue(int LQCap) : mLinkedQueue (LQCap), mLQCap (LQCap), mLQSize (0)
{
}

template<typename LQ>
LinkedQueue<LQ>::LinkedQueue(const LinkedQueue<LQ> &c) : mLinkedQueue (c.mLinkedQueue), mLQCap (c.mLQCap), 
														 mLQSize (c.mLQSize)
{
}

template<typename LQ>
LinkedQueue<LQ>::~LinkedQueue()
{
}

template<typename LQ>
LinkedQueue<LQ> &LinkedQueue<LQ>::operator=(const LinkedQueue<LQ> &rhs)
{
		mLQSize		 = rhs.mLQSize;
		mLQCap		 = rhs.mLQSize;
		mLinkedQueue = rhs.mLinkedQueue;
	return *this;
}

template<typename LQ>
void LinkedQueue<LQ>::Enqueue(LQ data)
{
	if (isFull())
		throw cException("Enqueue - Error: Linked Queue is Full!");
	else
		mLinkedQueue.Append(data);
	++mLQSize;
}

template<typename LQ>
LQ LinkedQueue<LQ>::Dequeue()
{
	if (isEmpty())
		throw cException("Dequeue - Error: Linked Queue is Empty!");
	else
	{
		--mLQSize;
		return mLinkedQueue.Extract(*(mLinkedQueue.Begin())).GetData();
	}
}

template<typename LQ>
LQ &LinkedQueue<LQ>::Front()
{
	return *mLinkedQueue.Begin();
}

template<typename LQ>
int LinkedQueue<LQ>::Size()
{
	return mLQSize;
}

template<typename LQ>
bool LinkedQueue<LQ>::isEmpty()
{
	return mLinkedQueue == 0;
}

template<typename LQ>
bool LinkedQueue<LQ>::isFull()
{
	if (mLQSize == mLQCap)
		return true;
}


#endif