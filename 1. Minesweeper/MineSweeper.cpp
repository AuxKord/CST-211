/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/20/15
* H.W. Number:			Lab 1
* Filename:				MineSweeper.cpp
************************************************************************/
#include <iostream>
#include <vector>
#include "Minesweeper.h"


using std::cout;
using std::cin;
//using std::toupper;


Minesweeper::Minesweeper()
{
}

Minesweeper::~Minesweeper()
{
}

void Minesweeper::ReadyPlayerOne()
{
	do
	{
		Menu();
		DisplayBoard();

		// Check if user hits mine
		// Return Win or Lose

	} while (PlayAgain());
}

void Minesweeper::Menu()
{
	char M = '\0';

	cout << "\n\n\t\tReadyPlayerOne\n";
	cout << "\n\n\n\t\tBeginner\n\t\tIntermediate\n\t\tExpert\n\n\tEnter Level choice: ";
	do {
		cin >> M;
		M = toupper(M);
		switch (M)
		{
		case 'B':
			cout << "\n\t\Noob";
			level = Beginner;
			break;
		case 'I':
			cout << "\n\t\Good luck";
			level = Intermediate;
			break;
		case 'E':
			level = Expert;
			cout << "\n\t\So You Think You're An Expert Huh?...";
			break;
		case 'Q':
			cout << "\n\n\n\t\tStay Golden Pony Boy\n\n\n";
			break;
		default:
			system("cls");
			cout << "\n\n\t\tReadyPlayerOne......Take II \n";
			cout << "\n\n\n\t\tBeginner <B>\n\t\tIntermediate <I>\n\t\tExpert <E>\n\n\tEnter Level choice: ";
		}
	} while (M != 'Q');

}

void Minesweeper::LevelChoice()
{
	Menu();

	if (level = Beginner)
	{
		m_board.SetBoard(10, 10);
		m_board.SetMines(10);
	}
	else if (level = Intermediate)
	{
		m_board.SetBoard(16, 16);
		m_board.SetMines(40);
	}
	else if (level = Expert)
	{
		m_board.SetBoard(16, 30);
		m_board.SetMines(100);
	}
	else
	{
		throw cException("Could not get level ");
	}
}

void Minesweeper::MineLoop(int last_row, int last_col, char flagged) const
{
	//TODO
}


void Minesweeper::DisplayBoard()
{
	//TODO  
	// Tried Simple Board w/ HardCoded Level 
	// All Coded Functions Seemed to work properly
}

bool Minesweeper::GameOver() const
{	
	//TODO
	return false;
}

bool Minesweeper::PlayAgain()
{
	char a = '\0';

	if (true) // Check this Statement after writing GameStatus
	{
		cout << "\n\n\t\t So you weren't an " << level << " too bad...Want to try again? (Y or N)...";
		cin >> a;
		a = toupper(a);

		if (a == 'Y')
		{
			cout << "\n\n\t\tReadyPlayerOne...Take III\n";
			return true;
		}
		else if (a == 'N')
		{
			cout << "\n\n\n\t\tStay Golden Pony Boy\n\n\n";
			return false;
		}
		else
		{
			cout << "\n\n\t\tEither you're Blind or Mad cause you lost."
				<< " Either way it doesn't matter, See Ya later\n\n";
			return false;
		}
	}
}

bool Minesweeper::UserClick ()
{
	//TODO
	return false;
}

bool Minesweeper::GetUserClick ( int & val ) const
{
	//TODO
	return false;
}

int Minesweeper::GetLevel()
{
	return Minesweeper::level;
}