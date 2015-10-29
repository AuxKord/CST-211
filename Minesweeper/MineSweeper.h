/**************************************************************************************
* Author:				Abdul Yahya													  *
* Created:				10/16/15													  *
* Updated:				10/16/15													  *
* H.W. Number:			Lab 1														  *
* Filename:				Minesweeper.h												  *
***************************************************************************************
*	Class: Minesweeper																  *
***************************************************************************************
*	Purpose:
*
*
*	Constructors:
*
*	Mutators:
*
*
*	Methods:
*
***************************************************************************************/

#ifndef MineSweeper_H
#define MineSweeper_H

#include "Board.h"
#include "String"

class Minesweeper
{
public:
	Minesweeper();
	~Minesweeper();

	void ReadyPlayerOne();
	void Menu();
	void LevelChoice();
	void MineLoop(int last_row, int last_col, char flagged) const;

	void DisplayBoard();
	

	bool GameOver() const;
	bool PlayAgain();
	bool UserClick();
	bool GetUserClick(int & val) const;

	int GetLevel();

	enum DIFFICULTY { Beginner, Intermediate, Expert };
private:
	DIFFICULTY level;
	Board m_board;


};

#endif 
