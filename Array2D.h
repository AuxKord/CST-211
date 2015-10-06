/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/04/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Array2D.h
************************************************************/

#ifndef Array2D_H
#define Array2D_H

/************************************************************************
* Class: cTime
*
* Constructors:
*	cArray2D ()
*		Array, Rows, and Columns are initialized to 0. 
*	cArray2D ( int row, int col = 0 )
*		Overloading Row and Col member Variables.
*	Array2D	( const Array2D &c )
*		Copy Constructor.
*
* Mutators:
*	void SetRow ( int rows )
*		This mutator initializes the data members to the specified
*		parameters. It also ensures that the data is valid.
*	void SetCol ( int columns )
*		This mutator initializes the data members to the specified
*		parameters. It also ensures that the data is valid.
*
* Methods:
*	void GetRow ()
*		This method gets the row values.
*	void GetCol()
*		This method gets the column values.
*************************************************************************/

template <typename T>
class cArray2D
{
public:
	Array2D  ();
	Array2D  ( int row, int col = 0 );
	Array2D	 ( const Array2D &c     );
	~Array2D ();

	Array2D &operator= ( const Array2D &rhs );
	Row<T> operator[]  ( int index			);

	int GetRow ();
	int GetCol ();

	void SetRow ( int rows    );
	void SetCol ( int columns );

	T &Select ( int row, int column );

private:
	T** m_array;

	int m_row;
	int m_col;

};

#include "Array2D.inc"

#endif