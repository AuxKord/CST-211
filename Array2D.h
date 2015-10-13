/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/10/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Array2D.h
************************************************************/

#ifndef Array2D_H
#define Array2D_H

#include "Row.h"
#include "Exception.h"

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
	cArray2D  ();									// Default Constructor
	cArray2D  ( int row, int col = 0 );				// Overloaded Row & Col constructor
	cArray2D  ( const cArray2D &c );				// Copy Construtor
	~cArray2D ();									// Destructor

	cArray2D &operator= ( const cArray2D &rhs );	// Overloaded Assignment Operator Constructor

	const cRow<T> operator[]  ( int index ) const;	// Array Index Operator Constructor
	cRow<T>		  operator[]  ( int index );		// Array Index Operator Constructor

	int GetRow ();	// Gets the Row Values
	int GetCol ();	// Gets the Col Values

	void SetRow ( int row );		// Checks and sets the Row Values
	void SetCol ( int column );		// Checks and sets the Col Values

	T &Select ( int row, int column );	// Accesses row and column values

private: 
	T** m_array;	// Pointer to Pointer Multi-Dimensional Array 

	int m_row;		// Member variable used to store row values
	int m_col;		// Member variable used to store column values

};

#include "Array2D.inc"

#endif


