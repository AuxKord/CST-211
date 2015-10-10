/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/04/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Row.h
************************************************************/

#ifndef Row_H
#define Row_H

/************************************************************************
* Class: cRow
*
* Constructors:
*	cRow ( cArray2D &array, int row );
*		Array and Row are initialized to 0.
*************************************************************************/
template <typename T> class cArray2D;

template <typename T>
class cRow
{
public:
	cRow ( cArray2D<T> &array, int row );	// Overloaded Default Constructor

	const T &operator[] ( int column ) const;	// Subscript Operator Constructor
	T		&operator[] ( int column );			// Const Subscript Operator Constructor

private:
	cArray2D<T> &m_array2D;	// Placeholder

	int	m_row;				// PlaceHolder

};

#include "Row.inc"

#endif
