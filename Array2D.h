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
*	int GetRow ()
*		This method gets the row values.
*	int GetCol()
*		This method gets the column values.
*************************************************************************/

template <typename T>
class cArray2D
{
public:
	cArray2D  ();						// Default Constructor
	cArray2D  ( int row, int col = 0 );	// Overloaded Row & Col constructor
	cArray2D  ( const cArray2D &c );		// Copy Construtor
	~cArray2D ();						// Destructor

	cArray2D &operator= ( const cArray2D &rhs );	// Overloaded Assignment Operator Constructor
	Row<T> operator[]  ( int index );			// Array Index Operator Constructor

	int GetRow ();	// Gets the Row Values
	int GetCol ();	// Gets the Col Values

	void SetRow ( int rows );		// Checks and sets the Row Values
	void SetCol ( int columns );	// Checks and sets the Col Values

	T &Select ( int row, int column );	// Selects desired Row and Column

private:
	T** m_array;	// Pointer to Pointer Multi-Dimensional Array 

	int m_row;		// User Defined Row	
	int m_col;		// User Defined Column

};

template <typename T>
class cRow : cArray2D
{
public:
	cRow ( cArray2D &array, int row );

	T &operator[] ( int column );

private:
	cArray2D &m_array2D;

	int		  m_row;
		
};

#include "Array2D.inc"

#endif


