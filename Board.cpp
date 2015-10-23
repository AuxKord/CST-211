/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Lab 1
* Filename:				Board.cpp
************************************************************************/
#include "Board.h"
#include <iostream>

using std::cout;

Board::Board() : m_mine(0), m_covered(0), m_flagged(0)
{
}

Board::~Board()
{
	m_mine = 0;
	m_covered = 0;
	m_flagged = 0;
}

void Board::produceAcquaintaces()
{
	for (int r = 0; r < m_board.GetCol(); ++r)
		for (int c = 0; c < m_board.GetRow(); ++c)
		{
			int Acquaintance = 0;

			int row_min = m_row - 1 < 0 ? 0 : m_row - 1;
			int col_min = m_col - 1 < 0 ? 0 : m_col - 1;
			int row_max = m_row + 1 >= m_board.GetRow() ? m_board.GetRow() - 1 : m_row + 1;
			int col_max = m_col + 1 >= m_board.GetCol() ? m_board.GetCol() - 1 : m_col + 1;

			for (int i ( row_min ); i <= row_max; i++)
				for (int j ( col_min ); j <= col_max; j++)
					Acquaintance += m_board[ i ][ j ].IsMine();

			m_board[ r ][ c ].SetAcquaintances( Acquaintance );
		}
}

void Board::SetBoard(int row, int col)
{
	m_board.SetCol ( col );
	m_board.SetRow ( row );
	m_covered = col * row;
	m_flagged = 0;
}

void Board::SetMines( int mine )
{
	m_mine = mine;
	int	row = m_board.GetRow();
	int	col = m_board.GetCol();

	for ( int m = 0; m < mine; ++m )
	{
		srand(unsigned(time(0)));
		int x, y;
		do
		{
			x = rand() % row;
			y = rand() % col;
		} while ( m_board.Select( row, col ).IsMine() );
		m_board.Select( row, col ).SetMine();
		mine--;
	}
} 
void Board::Uncover( int row, int col )
{
	if ( m_board[ row ][ col ].IsCovered() )
	{
		int row_min = row - 1 < 0 ? 0 : row - 1;
		int col_min = col - 1 < 0 ? 0 : col - 1;
		int row_max = row + 1 >= m_board.GetRow() ? m_board.GetRow() - 1 : row + 1;
		int col_max = col + 1 >= m_board.GetCol() ? m_board.GetCol() - 1 : col + 1;
		Cell &uc = m_board[ row ][ col ];
		// Display Uncovered Cell
		m_board[ row ][ col ].SetUncover();
		m_covered--;

		for (int i(row_min); i <= row_max; i++) //	Adjacent Rows
			for (int j(col_min); j <= col_max; j++) // Adjacent Columns
				if ( m_board[ i ][ j ].IsEmpty() && m_board[ i ][ j ].IsCovered() )
					Uncover(i, j); 
				else if ( m_board[ i ][ j ].IsCovered() )
				{
					m_board[ i ][ j ].SetUncover();
					// Display Cell
					m_covered--;
				}
	}
}

void Board::FlagCell(int row, int col)
{
	if (!m_board[ row ][ col ].IsFlagged())
	{
		m_board[ row ][ col ].SetFlag();
		m_board[ row ][ col ].SetUncover();
		m_flagged++;
	}
	Cell &cell = m_board[ row ][ col ];
}

void Board::UnFlagCell(int row, int col)
{
	Cell &cell = m_board[ row ][ col ];
	if (m_board[ row ][ col ].IsFlagged())
	{
		m_board[ row ][ col ].SetCovered();
		m_flagged--;
	}
}

int Board::GetCoveredCells() const
{
	return m_covered;
}

int Board::GetMines() const
{
	return m_mine;
}

int Board::GetFlagged() const
{
	return m_flagged;
}
cArray2D<Cell> Board::GetBoard()
{
	return m_board;
}


