#include "CircularQueue.h"
#include "LinkedQueue.h"
/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 5
* Filename:				Queue.inc
************************************************************************/
#ifndef Queue_i
#define Queue_i

/**********************************************************************
						**Circular Queue***	
************************************************************************/


template <typename CQ>
CircularQueue<CQ>::CircularQueue(int CQCap) : mCircularQueue (nullptr), CQCap (CQCap)
{

}

template<typename CQ>
CircularQueue<CQ>::CircularQueue(const CircularQueue & c)
{
}

template<typename CQ>
CircularQueue<CQ>::~CircularQueue()
{
}

template<typename CQ>
CircularQueue & CircularQueue<CQ>::operator=(const CircularQueue & rhs)
{
	// TODO: insert return statement here
}

template<typename CQ>
void CircularQueue<CQ>::Enqueue(CQ data)
{
}

template<typename CQ>
CQ CircularQueue<CQ>::Dequeue()
{
	return CQ();
}

template<typename CQ>
CQ & CircularQueue<CQ>::Front()
{
	// TODO: insert return statement here
}

template<typename CQ>
int CircularQueue<CQ>::Size()
{
	return 0;
}

template<typename CQ>
bool CircularQueue<CQ>::isEmpty()
{
	return false;
}

template<typename CQ>
bool CircularQueue<CQ>::isFull()
{
	return false;
}


/**********************************************************************
						**Linked Queue***
************************************************************************/
template<typename LQ>
LinkedQueue<LQ>::LinkedQueue(int LQCap)
{
}

template<typename LQ>
LinkedQueue<LQ>::LinkedQueue(const LinkedQueue & c)
{
}

template<typename LQ>
LinkedQueue<LQ>::~LinkedQueue()
{
}

template<typename LQ>
LinkedQueue & LinkedQueue<LQ>::operator=(const LinkedQueue & rhs)
{
	// TODO: insert return statement here
}

template<typename LQ>
void LinkedQueue<LQ>::Enqueue(LQ data)
{
}

template<typename LQ>
LQ LinkedQueue<LQ>::Dequeue()
{
	return LQ();
}

template<typename LQ>
LQ & LinkedQueue<LQ>::Front()
{
	// TODO: insert return statement here
}

template<typename LQ>
int LinkedQueue<LQ>::Size()
{
	return 0;
}

template<typename LQ>
bool LinkedQueue<LQ>::isEmpty()
{
	return false;
}

template<typename LQ>
bool LinkedQueue<LQ>::isFull()
{
	return false;
}


#endif