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
#include <process.h>
#include <dos.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <tchar.h>

using std::cout;

/**********************************************************************
						**Circular Queue***
************************************************************************/

void DefaultConstructor()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}
void CopyConstructor()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

void Assignment()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

void Peek()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}
void Size()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}
void isEmpty()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}
void isFull()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

void Enqueue()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}
void Dequeue()
{
	try
	{
		if ()
			throw cException("Pass");
		else
			throw cException("Fail");
	}
	catch (cException &e)
	{
		cout << e.GetMessagee();
	}
}

void OverFlow()
{
	try
	{
		//stack.Push(1);
		if ()
			throw cException("Fail");
		else
		{
			try
			{
				//stack.Push(1);
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

void Undeflow()
{
	try
	{
		//stack.Pop();
		if ()
			throw cException("Fail");
		else
		{
			try
			{
				//stack.Pop();
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
**Linked Queue***
************************************************************************/


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
	std::cout << "\t\tWelcome to Abdul's Stack ADT Application";

	gotoxy(10, 5);
	std::cout << "___________________________________________";

	gotoxy(10, 6);
	std::cout << "1. Test the Stack";

	gotoxy(10, 7);
	std::cout << "2. Overflow & Underflow";

	gotoxy(10, 8);
	std::cout << "3. Exit";

	gotoxy(10, 9);
	std::cout << "___________________________________________";

	gotoxy(10, 10);
	std::cout << "Enter your Selection: ";
	int m = -1;
	std::cin >> m;

	return m;
}

void TestStack()
{
	::system("cls");

	gotoxy(10, 4);
	std::cout << "\t\tRunning Tests...";

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
	DefaultConstructor();
	pos++;

	gotoxy(14, pos);
	std::cout << "Copy ";
	gotoxy(51, pos);
	CopyConstructor();
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
	Assignment();
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
	std::cout << "Peek ";
	gotoxy(51, pos);
	Peek();
	pos++;

	gotoxy(14, pos);
	std::cout << "Size ";
	gotoxy(51, pos);
	Size();
	pos++;

	gotoxy(14, pos);
	std::cout << "isEmpty ";
	gotoxy(51, pos);
	isEmpty();
	pos++;

	gotoxy(14, pos);
	std::cout << "isFull ";
	gotoxy(51, pos);
	isFull();
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
	std::cout << "Push ";
	gotoxy(51, pos);
	Push();
	pos++;

	gotoxy(14, pos);
	std::cout << "Pop ";
	gotoxy(51, pos);
	Pop();
	pos++;

	gotoxy(10, pos++);
	std::cout << "___________________________________________";
	pos++;
	gotoxy(10, pos++);
}

void OUStack()
{
	::system("cls");

	gotoxy(10, 4);
	std::cout << "\t\tRunning Exceptions...";

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
	OverFlow();
	pos++;

	gotoxy(14, pos);
	std::cout << "Undeflow: ";
	gotoxy(51, pos);
	Undeflow();
	pos++;

	gotoxy(10, pos++);
	std::cout << "___________________________________________";
	pos++;
	gotoxy(10, pos++);
}

#endif