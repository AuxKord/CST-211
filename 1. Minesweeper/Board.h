/**************************************************************************************
* Author:				Abdul Yahya													  *
* Created:				10/16/15													  *
* Updated:				10/16/15													  *				
* H.W. Number:			Lab 1														  *	
* Filename:				Board.h														  *
***************************************************************************************
*	Class: Board																	  *
*																					  *
*	Purpose:																		  *
*		Minesweeper Game Board														  *
*																					  *
*	Constructors:																	  *
*		Board();																	  *
*			Default Constructor														  *
*																					  *		
*	Destructor:																		  *
*		~Board();																	  *
*			Sets Board Variables to 0;												  *
*																					  *		
*	Mutators:																		  *
*		void produceAcquaintaces()													  *
*																					  *
*		void SetBoard(int row, int col);											  *
*			Sets the Game Board with Row and Size depending on level				  *
*		void SetMines(int mine);													  *
*			Sets mines randomly on the Game Board depending on level				  *
*		void UnCover(int row, int col);												  *
*			Uncovers a cell specified by the user									  *
*		void FlagCell(int row, int col);											  *
*			flags a cell specified by the user										  *
*		void UnflagCell(int row, int col);											  *
*			Unflags a cell specified by the user									  *
*																					  *
*	Methods:																		  *
*		int GetCoveredCells() const;												  *
*		int GetMines() const;														  *
*		int GetFlagged() const;														  *																	  *
*																					  *
*		const Array_2D<Cell> & GetBoard() const;									  *														  *
*																					  *																			  *
***************************************************************************************/

#ifndef Board_H
#define Board_H

#include <ctime>
#include <cmath>

#include "Array2D.h"
#include "Cell.h"

class Board
{
public:
	Board();	// Default Constructor
	~Board();	//Destructor

	void produceAcquaintaces();			// Produces Neighboring Mines and sets them
	void SetBoard ( int row, int col );	// Sets the Game Board according to game level

	void SetMines   ( int mine );			// Randomly places mines on the game board
	void Uncover    (int row, int col );	// Uncovers Cells
	void FlagCell   (int row, int col );	// Flags Cells
	void UnFlagCell ( int row, int col );	// Unflags Cells

	int GetCoveredCells() const;	// Gets the number of Covered Cells
	int GetMines() const;			// Gets the number of Mines
	int GetFlagged() const;			// Gets the number of flagged Cells

	cArray2D<Cell> GetBoard();		// Gets the Game Board referenced from cArray2D

private:
	cArray2D<Cell> m_board;

	int m_mine;
	int m_row;
	int m_col;

protected:
	int m_covered;
	int m_flagged;
};
#endif
