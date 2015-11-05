/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 2
* Filename:				Main.cpp
************************************************************************/
#include "Driver.h"

int main(int argc, char *argv[])
{
	while (true)
	{
		int selection = MainMenu();
		char ch = '\0';
		switch (selection)
		{
		case 1:
		{
			Ready(argc, argv);
			std::cout << "Press any key to return to Main Manu: ";
			ch = _getch();
		}
		break;
		case 2:
		{
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

	return 0;
}



