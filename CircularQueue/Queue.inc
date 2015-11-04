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

/**************************************************************
* CircularQueue<CQ>::CircularQueue(...)
*		Purpose: Default Constructor. Initializes m_node
*				 to 0.
****************************************************************/
template <typename CQ>
CircularQueue<CQ>::CircularQueue(int CQCap) : mCircularQueue (CQCap), mCQCap (CQCap), mCQSize (0)
{

}

/**************************************************************
* CircularQueue<CQ>::CircularQueue(...) 
*		Purpose: Copy Constructor. Initializes m_node
*				 to 0.
****************************************************************/
template <typename CQ>
CircularQueue<CQ>::CircularQueue(const CircularQueue & c) : mCircularQueue (c.mCircularQueue), mCQCap (c.mCQCap),
															mCQSize (c.mCQSize)
{
}

/**************************************************************
* CircularQueue<CQ> &CircularQueue<CQ>::operator=(...)
*		Purpose: Assignment Operator.
****************************************************************/
template <typename CQ>
CircularQueue<CQ> &CircularQueue<CQ>::operator=(const CircularQueue<CQ> &rhs)
{
		mCQSize		   = rhs.mCQSize;
		mCQCap		   = rhs.mCQCap;
		mCircularQueue = rhs.mCircularQueue;
	return *this;
}

/**************************************************************
* void CircularQueue<CQ>::Enqueue(CQ data)
*		Purpose: Enqueue Function. 
****************************************************************/
template <typename CQ>
void CircularQueue<CQ>::Enqueue(CQ data)
{
	if (isFull())
		throw cException("Enqueue - Error: Circular Queue is Full!");
	else
			mCircularQueue[data];
	++mCQSize;
}

/**************************************************************
* CQ CircularQueue<CQ>::Dequeue()
*		Purpose: Dequeue Function.
****************************************************************/
template <typename CQ>
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

/**************************************************************
* CQ &CircularQueue<CQ>::Front()
*		Purpose: Front Function.
****************************************************************/
template <typename CQ>
CQ &CircularQueue<CQ>::Front()
{
	if (!isEmpty())
		return mCircularQueue[0];
	else
		throw cException("Front - Error: Circular Queue is Empty!");
}


/**********************************************************************
						**Linked Queue***
************************************************************************/

/**************************************************************
* LinkedQueue<LQ>::LinkedQueue(...) 
*		Purpose: Default Constructor.
****************************************************************/
template <typename LQ>
LinkedQueue<LQ>::LinkedQueue(int LQCap) : mLinkedQueue (LQCap), mLQCap (LQCap), mLQSize (0)
{
}

/**************************************************************
* LinkedQueue<LQ>::LinkedQueue(...)
*		Purpose: Copy Constructor.
****************************************************************/
template<typename LQ>
LinkedQueue<LQ>::LinkedQueue(const LinkedQueue<LQ> &c) : mLinkedQueue (c.mLinkedQueue), mLQCap (c.mLQCap), 
														 mLQSize (c.mLQSize)
{
}

/**************************************************************
* LinkedQueue<LQ> &LinkedQueue<LQ>::operator=(...)
*		Purpose: Assignment Operator.
****************************************************************/
template<typename LQ>
LinkedQueue<LQ> &LinkedQueue<LQ>::operator=(const LinkedQueue<LQ> &rhs)
{
		mLQSize		 = rhs.mLQSize;
		mLQCap		 = rhs.mLQSize;
		mLinkedQueue = rhs.mLinkedQueue;
	return *this;
}

/**************************************************************
* void LinkedQueue<LQ>::Enqueue(...)
*		Purpose: Enqueue Function.
****************************************************************/
template<typename LQ>
void LinkedQueue<LQ>::Enqueue(LQ data)
{
	if (isFull())
		throw cException("Enqueue - Error: Linked Queue is Full!");
	else
		mLinkedQueue.Append(&data);
	++mLQSize;
}

/**************************************************************
* LQ LinkedQueue<LQ>::Dequeue()
*		Purpose: Dequeue Function.
****************************************************************/
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


#endif