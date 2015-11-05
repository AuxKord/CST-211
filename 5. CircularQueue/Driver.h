/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 5
* Filename:				Driver.h
************************************************************************/
#ifndef Driver_H
#define Driver_H

#include "LinkedQueue.h"
#include "CircularQueue.h"

#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
using std::cout;

/**********************************************************************
						 **LinkedQueue Tests***
************************************************************************/

/**************************************************************
* void LQDefaultConstructor()
*		Purpose: Test the LinkedQueue class' Default
*				 Constructor.
****************************************************************/
void LQDefaultConstructor()
{
	LinkedQueue<int> LQ(10);
//	LQ.Enqueue(2);				// Uncomment Line to Fail Test
	try
	{
		if (LQ.Size() == 0)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQCopyConstructor()
*		Purpose: Test the LinkedQueue class' Copy
*				 Constructor.
****************************************************************/
void LQCopyConstructor()
{
	LinkedQueue<int> LQ(10);
//	LQ.Enqueue(6);				// Uncomment Line to Fail Test
	LQ.Enqueue(5); 
	LinkedQueue<int> cLQ(LQ);
	try
	{
		if (cLQ.Front() == 5)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQAssignment()
*		Purpose: Test the LinkedQueue class' Assignment
*				 Operator.
****************************************************************/
void LQAssignment()
{
	LinkedQueue<int> LQ(10);
//	LQ.Enqueue(4);				// Uncomment Line to Fail Test	
	LQ.Enqueue(5);
	LinkedQueue<int> Assign(5);
	Assign = LQ;
	try
	{
		if (Assign.Front() == 5)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQFront()
*		Purpose: Test the LinkedQueue class' Front Function.
****************************************************************/
void LQFront()
{
	LinkedQueue<int> LQ(10);
//	LQ.Enqueue(4);				// Uncomment Line to Fail Test	
	LQ.Enqueue(5);
	try
	{
		if (LQ.Front() == 5)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQSize()
*		Purpose: Test the LinkedQueue class' Size Function.
****************************************************************/
void LQSize()
{
	LinkedQueue<int> LQ(10);
//	LQ.Enqueue(4);				// Uncomment Line to Fail Test	
	int LQSizeA = LQ.Size();
	LQ.Enqueue(5);
	int LQSizeB = LQ.Size();

	try
	{
		if (LQSizeA == 0 && LQSizeB == 1)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQisEmpty()
*		Purpose: Test the LinkedQueue class' isEmpty
*				 Function.
****************************************************************/
void LQisEmpty()
{
	LinkedQueue<int> LQ(10);
	LQ.Enqueue(5);				
	LQ.Dequeue();
//	LQ.Enqueue(4);				// Uncomment Line to Fail Test	
	try
	{
		if (LQ.isEmpty())
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQisFull()
*		Purpose: Test the LinkedQueue class' isFull
*				 Function.
****************************************************************/
void LQisFull()
{
	LinkedQueue<int> LQ(1);
	LQ.Enqueue(10);
//	LQ.Dequeue();				// Uncomment Line to Fail Test	
	try
	{
		if (LQ.isFull())
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQEnqueue()
*		Purpose: Test the LinkedQueue class' Enqueue
*				 Function.
****************************************************************/
void LQEnqueue()
{
	LinkedQueue<int> LQ(10);
//	LQ.Enqueue(4);				// Uncomment Line to Fail Test	
	LQ.Enqueue(5);
	try
	{
		if (LQ.Front() == 5)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQDequeue()
*		Purpose: Test the LinkedQueue class' Dequeue
*				 Function.
****************************************************************/
void LQDequeue()
{
	LinkedQueue<int> LQ(10);
//	LQ.Enqueue(4);				// Uncomment Line to Fail Test	
	LQ.Enqueue(5);
	LQ.Dequeue();
	try
	{
		if (LQ.isEmpty())
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQOverFlow()
*		Purpose: Test the LinkedQueue class' OverFlow
*				 Exception.
****************************************************************/
void LQOverFlow()
{
	LinkedQueue<int> LQ(1);
	LQ.Enqueue(5);
	try
	{
		LQ.Enqueue(1);			// Comment This line out to Fail OverFlow Test
		if (LQ.isFull())
			throw cException("Fail");
		else
		{
			try
			{
				LQ.Enqueue(1);
			}
			catch (cException &e)
			{
				cout << e.GetMessagee();
			}
		}
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void LQUndeflow()
*		Purpose: Test the LinkedQueue class' Undeflow
*				 Exception.
****************************************************************/
void LQUndeflow()
{
	LinkedQueue<int> LQ(1);
	LQ.Enqueue(5);
	LQ.Dequeue();
	try
	{
		LQ.Dequeue();			// Comment This line out to Fail UnderFlow Test
		if (LQ.isEmpty())
			throw cException("Fail");
		else
		{
			try
			{
				LQ.Dequeue();
			}
			catch (cException &e)
			{
				cout << e.GetMessagee();
			}
		}
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**********************************************************************
							**Circular Queue Tests***
************************************************************************/

/**************************************************************
* void CQDefaultConstructor()
*		Purpose: Test the CircularQueue class' Default
*				 Constructor.
****************************************************************/
void CQDefaultConstructor()
{
	CircularQueue<int> CQ(10);
	//	CQ.Enqueue(2);				// Uncomment Line to Fail Test
	try
	{
		if (CQ.Size() == 0)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void CQCopyConstructor()
*		Purpose: Test the CircularQueue class' Copy
*				 Constructor.
****************************************************************/
void CQCopyConstructor()
{
	CircularQueue<int> CQ(10);
	//	CQ.Enqueue(6);				// Uncomment Line to Fail Test
	CQ.Enqueue(5);
	try
	{
		CircularQueue<int> copy(CQ);
		if (copy.Front() == 5)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void CQAssignment()
*		Purpose: Test the CircularQueue class' Assignment
*				 Operator.
****************************************************************/
void CQAssignment()
{
	CircularQueue<int> CQ(10);
	//	CQ.Enqueue(4);				// Uncomment Line to Fail Test	
	CQ.Enqueue(5);
	CircularQueue<int> Assign(5);
	Assign = CQ;
	try
	{
		if (Assign.Front() == 5)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void CQFront()
*		Purpose: Test the CircularQueue class' Front Function.
****************************************************************/
void CQFront()
{
	CircularQueue<int> CQ(10);
	//	CQ.Enqueue(4);				// Uncomment Line to Fail Test	
	CQ.Enqueue(5);
	try
	{
		if (CQ.Front() == 5)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}


/**************************************************************
* void CQSize()
*		Purpose: Test the CircularQueue class' Size Function.
****************************************************************/
void CQSize()
{
	CircularQueue<int> CQ(10);
	//	CQ.Enqueue(4);				// Uncomment Line to Fail Test	
	int CQSizeA = CQ.Size();
	CQ.Enqueue(5);
	int CQSizeB = CQ.Size();

	try
	{
		if (CQSizeA == 0 && CQSizeB == 1)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}


/**************************************************************
* void CQisEmpty()
*		Purpose: Test the CircularQueue class' isEmpty
*				 Function.
****************************************************************/
void CQisEmpty()
{
	CircularQueue<int> CQ(10);
	CQ.Enqueue(5);
	CQ.Dequeue();
	//	CQ.Enqueue(4);				// Uncomment Line to Fail Test	
	try
	{
		if (CQ.isEmpty())
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}


/**************************************************************
* void CQisFull()
*		Purpose: Test the CircularQueue class' isFull
*				 Function.
****************************************************************/
void CQisFull()
{
	CircularQueue<int> CQ(1);
	CQ.Enqueue(1);
	//	CQ.Dequeue();				// Uncomment Line to Fail Test	
	try
	{
		if (CQ.isFull())
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}


/**************************************************************
* void CQEnqueue()
*		Purpose: Test the CircularQueue class' Enqueue
*				 Function.
****************************************************************/
void CQEnqueue()
{
	CircularQueue<int> CQ(10);
	//	CQ.Enqueue(4);				// Uncomment Line to Fail Test	
	CQ.Enqueue(5);
	try
	{
		if (CQ.Front() == 5)
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}


/**************************************************************
* void CQDequeue()
*		Purpose: Test the CircularQueue class' Dequeue
*				 Function.
****************************************************************/
void CQDequeue()
{
	CircularQueue<int> CQ(10);
	//	CQ.Enqueue(4);				// Uncomment Line to Fail Test	
	CQ.Enqueue(5);
	CQ.Dequeue();
	try
	{
		if (CQ.isEmpty())
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}


/**************************************************************
* void CQOverFlow()
*		Purpose: Test the CircularQueue class' OverFlow
*				 Exception.
****************************************************************/
void CQOverFlow()
{
	CircularQueue<int> CQ(1);
	CQ.Enqueue(5);
	try
	{
		CQ.Enqueue(1);			// Comment This line out to Fail OverFlow Test
		if (CQ.isFull())
			throw cException("Fail");
		else
		{
			try
			{
				CQ.Enqueue(1);
			}
			catch (cException &e)
			{
				cout << e.GetMessagee();
			}
		}
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

/**************************************************************
* void CQUndeflow()
*		Purpose: Test the CircularQueue class' Undeflow
*				 Exception.
****************************************************************/
void CQUndeflow()
{
	CircularQueue<int> CQ(1);
	CQ.Enqueue(5);
	CQ.Dequeue();
	try
	{
		CQ.Dequeue();			// Comment This line out to Fail UnderFlow Test
		if (CQ.isEmpty())
			throw cException("Fail");
		else
		{
			try
			{
				CQ.Dequeue();
			}
			catch (cException &e)
			{
				cout << e.GetMessagee();
			}
		}
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

void gotoxy(int x, int y)
{
	COORD ord;
	ord.X = x;
	ord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ord);
}

int MainMenu()
{
	::system("cls");

	gotoxy(10, 4);
	std::cout << "\t\tWelcome to Abdul's Queue ADT Application";

	gotoxy(10, 5);
	std::cout << "___________________________________________";

	gotoxy(10, 6);
	std::cout << "1. LinkedQueue ";

	gotoxy(10, 7);
	std::cout << "2. LinkedQueue's Over & Under Flows";

	gotoxy(10, 8);
	std::cout << "3. CircularQueue";

	gotoxy(10, 9);
	std::cout << "4. CircularQueue's Over & Under Flows";

	gotoxy(10, 10);
	std::cout << "5. Exit";

	gotoxy(10, 11);
	std::cout << "___________________________________________";

	gotoxy(10, 12);
	std::cout << "Enter your Selection: ";
	int m = -1;
	std::cin >> m;

	return m;
}

/**********************************************************************
						**LinkedQueue Menus***
************************************************************************/

void TestLinkedQueue()
{
	::system("cls");

	gotoxy(10, 4);
	std::cout << "\t\tRunning LinkedQueue Tests...";

	gotoxy(10, 5);
	std::cout << "________________________________________________";

	gotoxy(10, 6);
	std::cout << "# Function Name           		  Status";

	gotoxy(10, 7);
	std::cout << "________________________________________________";


	gotoxy(10, 8);
	std::cout << "Constructors: ";

	int pos = 9;
	for (int i = 0; i <= 1; i++)
	{
		gotoxy(10, pos);
		std::cout << '-';
		pos++;
	}
	pos = 9;
	gotoxy(14, pos);
	std::cout << "Default";
	gotoxy(51, pos);
	LQDefaultConstructor();
	pos++;

	gotoxy(14, pos);
	std::cout << "Copy ";
	gotoxy(51, pos);
	LQCopyConstructor();
	pos++;

	gotoxy(10, 11);
	std::cout << "Operators: ";

	pos = 12;
	for (int i = 0; i < 1; i++)
	{
		gotoxy(10, pos);
		std::cout << '-';
		pos++;
	}

	pos = 12;
	gotoxy(14, pos);
	std::cout << "Assignment ";
	gotoxy(51, pos);
	LQAssignment();
	pos++;

	gotoxy(10, 13);
	std::cout << "Methods: ";

	pos = 14;
	for (int i = 0; i < 4; i++)
	{
		gotoxy(10, pos);
		std::cout << '-';
		pos++;
	}

	pos = 14;
	gotoxy(14, pos);
	std::cout << "Front ";
	gotoxy(51, pos);
	LQFront();
	pos++;

	gotoxy(14, pos);
	std::cout << "Size ";
	gotoxy(51, pos);
	LQSize();
	pos++;

	gotoxy(14, pos);
	std::cout << "isEmpty ";
	gotoxy(51, pos);
	LQisEmpty();
	pos++;

	gotoxy(14, pos);
	std::cout << "isFull ";
	gotoxy(51, pos);
	LQisFull();
	pos++;

	gotoxy(10, 18);
	std::cout << "Mutators: ";

	pos = 19;
	for (int i = 0; i < 2; i++)
	{
		gotoxy(10, pos);
		std::cout << '-';
		pos++;
	}
	pos = 19;
	gotoxy(14, pos);
	std::cout << "Enqueue ";
	gotoxy(51, pos);
	LQEnqueue();
	pos++;

	gotoxy(14, pos);
	std::cout << "Dequeue ";
	gotoxy(51, pos);
	LQDequeue();
	pos++;

	gotoxy(10, pos++);
	std::cout << "___________________________________________";
	pos++;
	gotoxy(10, pos++);
}

void LinkedQueueExceptions()
{
	::system("cls");

	gotoxy(10, 4);
	std::cout << "\t\tRunning LinkedQueue Exceptions...";

	gotoxy(10, 5);
	std::cout << "________________________________________________";

	gotoxy(10, 6);
	std::cout << "# Function Name           		  Status";

	gotoxy(10, 7);
	std::cout << "________________________________________________";
	int pos = 8;
	for (int i = 0; i <= 2; i++)
	{
		gotoxy(10, pos);
		std::cout << i + 1;
		pos++;
	}

	pos = 8;
	gotoxy(14, pos);
	std::cout << "OverFlow: ";
	gotoxy(51, pos);
	LQOverFlow();
	pos++;

	gotoxy(14, pos);
	std::cout << "Undeflow: ";
	gotoxy(51, pos);
	LQUndeflow();
	pos++;

	gotoxy(10, pos++);
	std::cout << "___________________________________________";
	pos++;
	gotoxy(10, pos++);
}

/**********************************************************************
						**CircularQueue Tests***
************************************************************************/

void TestCircularQueue()
{
	::system("cls");

	gotoxy(10, 4);
	std::cout << "\t\tRunning CircularQueue Tests...";

	gotoxy(10, 5);
	std::cout << "________________________________________________";

	gotoxy(10, 6);
	std::cout << "# Function Name           		  Status";

	gotoxy(10, 7);
	std::cout << "________________________________________________";


	gotoxy(10, 8);
	std::cout << "Constructors: ";

	int pos = 9;
	for (int i = 0; i <= 1; i++)
	{
		gotoxy(10, pos);
		std::cout << '-';
		pos++;
	}
	pos = 9;
	gotoxy(14, pos);
	std::cout << "Default";
	gotoxy(51, pos);
	CQDefaultConstructor();
	pos++;

	gotoxy(14, pos);
	std::cout << "Copy ";
	gotoxy(51, pos);
	CQCopyConstructor();
	pos++;

	gotoxy(10, 11);
	std::cout << "Operators: ";

	pos = 12;
	for (int i = 0; i < 1; i++)
	{
		gotoxy(10, pos);
		std::cout << '-';
		pos++;
	}

	pos = 12;
	gotoxy(14, pos);
	std::cout << "Assignment ";
	gotoxy(51, pos);
	CQAssignment();
	pos++;

	gotoxy(10, 13);
	std::cout << "Methods: ";

	pos = 14;
	for (int i = 0; i < 4; i++)
	{
		gotoxy(10, pos);
		std::cout << '-';
		pos++;
	}

	pos = 14;
	gotoxy(14, pos);
	std::cout << "Front ";
	gotoxy(51, pos);
	CQFront();
	pos++;

	gotoxy(14, pos);
	std::cout << "Size ";
	gotoxy(51, pos);
	CQSize();
	pos++;

	gotoxy(14, pos);
	std::cout << "isEmpty ";
	gotoxy(51, pos);
	CQisEmpty();
	pos++;

	gotoxy(14, pos);
	std::cout << "isFull ";
	gotoxy(51, pos);
	CQisFull();
	pos++;

	gotoxy(10, 18);
	std::cout << "Mutators: ";

	pos = 19;
	for (int i = 0; i < 2; i++)
	{
		gotoxy(10, pos);
		std::cout << '-';
		pos++;
	}
	pos = 19;
	gotoxy(14, pos);
	std::cout << "Enqueue ";
	gotoxy(51, pos);
	CQEnqueue();
	pos++;

	gotoxy(14, pos);
	std::cout << "Dequeue ";
	gotoxy(51, pos);
	CQDequeue();
	pos++;

	gotoxy(10, pos++);
	std::cout << "___________________________________________";
	pos++;
	gotoxy(10, pos++);
}

void CircularQueueExceptions()
{
	::system("cls");

	gotoxy(10, 4);
	std::cout << "\t\tRunning CircularQueue Exceptions...";

	gotoxy(10, 5);
	std::cout << "________________________________________________";

	gotoxy(10, 6);
	std::cout << "# Function Name           		  Status";

	gotoxy(10, 7);
	std::cout << "________________________________________________";
	int pos = 8;
	for (int i = 0; i <= 2; i++)
	{
		gotoxy(10, pos);
		std::cout << i + 1;
		pos++;
	}

	pos = 8;
	gotoxy(14, pos);
	std::cout << "OverFlow: ";
	gotoxy(51, pos);
	CQOverFlow();
	pos++;

	gotoxy(14, pos);
	std::cout << "Undeflow: ";
	gotoxy(51, pos);
	CQUndeflow();
	pos++;

	gotoxy(10, pos++);
	std::cout << "___________________________________________";
	pos++;
	gotoxy(10, pos++);
}

#endif