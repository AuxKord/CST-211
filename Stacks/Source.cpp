/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 4
* Filename:				Source.cpp
************************************************************************/
#include "Driver.h"

int main(int argc, _TCHAR* argv[])
{
	while (true)
	{
		int selection = MainMenu();
		char ch = '\0';
		switch (selection)
		{
		case 1:
			{
				TestStack();
				std::cout << "Press any key to return to Main Manu: ";
				ch = _getch();
			}
			break;
		case 2:
			{
				OUStack();
				std::cout << "Press any key to return to Main Manu: ";
				ch = _getch();
			}
			break;
		case 3:
			std::cout << "Thanks for stopping by!";
			break;
		default:
			return 0;
		};
	}
}