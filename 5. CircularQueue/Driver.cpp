/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 5
* Filename:				Driver.cpp
************************************************************************/
#include "Driver.h"

int main()
{
	bool quit = false;
	do
	{
		int selection = MainMenu();
		char ch = '\0';
		switch (selection)
		{
			case 1:
			{
				TestLinkedQueue();
				std::cout << "Press any key to return to Main Manu: ";
				ch = _getch();
			}
			quit = false;
			break;

			case 2:
			{
				LinkedQueueExceptions();
				std::cout << "Press any key to return to Main Manu: ";
				ch = _getch();
			}
			quit = false;
			break;
			case 3:
			{
				TestCircularQueue();
				std::cout << "Press any key to return to Main Manu: ";
				ch = _getch();
			}
			quit = false;
			break;

			case 4:
			{
				CircularQueueExceptions();
				std::cout << "Press any key to return to Main Manu: ";
				ch = _getch();
			}
			quit = false;
			break;

			case 5:
				std::cout << "\n\t\t\tThanks for stopping by!\n\n";
				quit = true;
				break;
			default:
				return 0;
		};
	} while (!quit);
}