/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 5
* Filename:				Driver.h
************************************************************************/
#ifndef Driver_H
#define Driver_H

#include <string>
#include "LinkedQueue.h"
#include "CircularQueue.h"

using namespace std;

//function to print test results to the screen
void display(bool pass, string functionName)
{
	if (pass)
	{
		cout << "PASS - ";
	}
	else
	{
		cout << "FAIL - ";
	}
	cout << functionName << endl;
}

//
//Queue Tests
//

void testQueue_ctor()
{
	LinkedQueue<int> que(5);
	bool pass = que.Size() == 0;
	display(pass, "testQueue_ctor()");
}
void testQueue_cctor()
{
	LinkedQueue<int> que(3);
	que.Enqueue(2);
	LinkedQueue<int> cpy(que);
	bool pass = cpy.Front() == 2;
	display(pass, "testQueue_cctor()");
}

//
//accessors
//
void testQueue_Front()
{
	LinkedQueue<int> que(3);
	que.Enqueue(2);
	bool pass = que.Front() == 2;
	display(pass, "testQueue_Front()");
}
void testQueue_Size()
{
	LinkedQueue<int> que(3);
	int size1 = que.Size();
	que.Enqueue(2);
	int size2 = que.Size();
	bool pass = size1 == 0 && size2 == 1;
	display(pass, "testQueue_Size()");
}
void testQueue_isEmpty()
{
	LinkedQueue<int> que(3);
	bool pass = que.isEmpty();
	display(pass, "testQueue_isEmpty()");
}
void testQueue_isFull()
{
	LinkedQueue<int> que(3);
	que.Enqueue(2);
	que.Enqueue(1);
	que.Enqueue(1);
	bool pass = que.isFull();
	display(pass, "testQueue_isFull()");
}

//
//mutators
//

void testQueue_equal_oper()
{
	LinkedQueue<int> que(3);
	que.Enqueue(2);
	LinkedQueue<int> equal(1);
	equal = que;
	bool pass = equal.Front() == 2;
	display(pass, "testQueue_equal_oper()");
}
void testQueue_Enqueue()
{
	LinkedQueue<int> que(3);
	que.Enqueue(2);
	bool pass = que.Front() == 2;
	display(pass, "testQueue_Enqueue()");
}
void testQueue_Dequeue()
{
	LinkedQueue<int> que(3);
	que.Enqueue(2);
	bool pass = que.Dequeue() == 2 && que.isEmpty();
	display(pass, "testQueue_Dequeue()");
}

//
//Circular Queue Tests
//

void testCQueue_ctor()
{
	CircularQueue<int> myCQueue(5);
	bool pass = myCQueue.Size() == 0;
	display(pass, "testCQueue_ctor()");
}
void testCQueue_cctor()
{
	CircularQueue<int> que(3);
	que.Enqueue(2);
	CircularQueue<int> cpy(que);
	bool pass = cpy.Front() == 2;
	display(pass, "testCQueue_cctor()");
}

//
//accessors
//
void testCQueue_Front()
{
	CircularQueue<int> que(3);
	que.Enqueue(2);
	bool pass = que.Front() == 2;
	display(pass, "testCQueue_Front()");
}
void testCQueue_Size()
{
	CircularQueue<int> que(3);
	int size1 = que.Size();
	que.Enqueue(2);
	int size2 = que.Size();
	bool pass = size1 == 0 && size2 == 1;
	display(pass, "testCQueue_Size()");
}
void testCQueue_isEmpty()
{
	CircularQueue<int> que(3);
	bool pass = que.isEmpty();
	display(pass, "testCQueue_isEmpty()");
}
void testCQueue_isFull()
{
	CircularQueue<int> que(3);
	que.Enqueue(2);
	que.Enqueue(1);
	que.Enqueue(1);
	bool pass = que.isFull();
	display(pass, "testCQueue_isFull()");
}

//
//mutators
//

void testCQueue_equal_oper()
{
	CircularQueue<int> que(3);
	que.Enqueue(2);
	CircularQueue<int> equal(1);
	equal = que;
	bool pass = equal.Front() == 2;
	display(pass, "testCQueue_equal_oper()");
}
void testCQueue_Enqueue()
{
	CircularQueue<int> que(3);
	que.Enqueue(2);
	bool pass = que.Front() == 2;
	display(pass, "testCQueue_Enqueue()");
}
void testCQueue_Dequeue()
{
	CircularQueue<int> que(3);
	que.Enqueue(1);
	que.Enqueue(2);
	que.Enqueue(3);
	bool pass = que.isFull() == true && que.Dequeue() == 1 && que.Front() == 2 && que.isFull() == false;
	display(pass, "testCQueue_Dequeue()");
}

#endif
