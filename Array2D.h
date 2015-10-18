/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 2
* Filename:				Array2D.h
************************************************************************/

#ifndef Array2D_H
#define Array2D_H

#include <iostream>

#include "Row.h"

/************************************************************************
* Class: cArray2D
*
* Purpose:  Create a row-major 2D Array of rows and columns. 
*
* Constructors:
*	cArray2D ()
*		Array, Rows, and Columns are initialized to 0.
*	cArray2D ( int row, int col )
*		Array, Rows, and Columns are initialized with data.
*	Array2D	( const Array2D &c )
*		Copy Constructor
*
* Destructor:
*	~cArray2D ()
*		De-allocates the Array and sets it to zero.
*
* Operators:
*	&operator= ( const cArray2D &array )
*		Overloaded Assignment Operator de-allocates m_array
*		if it contains old values. Allocates new values into tempArray
*		and resizes the array accordingly. Deep copies tempArray values
*		into m_array.
*	const cRow<T> operator[] ( int index ) const
*		Takes in the Array's index and returns the const RowObject
*		value.
*	cRow<T>		  operator[] ( int index )
*		Takes in the Array's index and returns the non-Const RowObject
*		value.
*
* Mutators:
*	void SetRow ( int row )
*		This mutator initializes the data member row to the specified
*		parameter. It also ensures that the data is valid.
*	void SetCol ( int col )
*		This mutator initializes the data member col to the specified
*		parameter. It also ensures that the data is valid.
*
* Methods:
*	int GetRow () const
*		This method gets the const row values.
*	int GetCol () const
*		This method gets the const column values.
************************************************************************/

template <typename T>
class cArray2D
{
public:
	cArray2D  ();								// Default Constructor
	cArray2D  ( int row, int col );				// OVerloaded Default Constructor
	cArray2D  ( const cArray2D<T> &array );		// Copy Constructor
	~cArray2D ();								// Destructor

	cArray2D &operator= ( const cArray2D &array );	// Overloaded Assignment Operator

	const cRow<T> operator[] ( int index ) const;	// Overloaded Const Subscript Operator
	cRow<T>		  operator[] ( int index );			// Overloaded non-Const Subscript Operator

	int GetRow () const;	// Method returns the private member variable m_row
	int GetCol () const; 	// Method returns the private member variable m_col	

	void SetRow ( int row );	// Mutator resizes the Array's row values
	void SetCol ( int col );	// Mutator resizes the Array's column values
	
	void Resize ( int srow, int scol ); // Mutator Resize function for the Setters above
	//void SetSize(int nrows, int ncols);
	const T &Select ( int row, int col ) const;		// Overloaded Const Array Accessor
	T		&Select ( int row, int col );			// Overloaded non-Const Array Accessor

private:
	T** m_array;	// Data type 'T' pointer to pointer Array private member variable

	int m_row;		// Private member variable m_row stores row values
	int m_col;		// Priavte member variable m_col stores column values

	void ValidateIndex ( int row, int col = 0 ) const;	// Private void function validates the Array's row and column values
};

#include "Array2D.inc"
#endif
