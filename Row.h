/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 2
* Filename:				Row.h
************************************************************************/

#ifndef Row_H
#define Row_H

template <typename T> class cArray2D; // Forward Declaration

/************************************************************
* Class: cRow <T>
*
* Purpose:	Provides the template class cArray2D row object
*			functionality. This template class does not store
*			any data.
*
* Constructors:
*		cRow ( const Array2D<T> &array, const int row )
*			Initializes m_array2D to Const &array and m_row to
			Const int row.
*		cRow ( Array2D<T> &array, int row )
*			Initializes m_array2D to non-Const &array and m_row 
*			to non-Const int row.
*
* Operators:
*		const T &operator[] ( int index ) const
*			Const reference to the array m_array2D is returned.
*		T& operator[] (int index)
*			Non-Const reference to the array array m_array2D 
*			is returned.
***************************************************************/

template <typename T>
class cRow
{
public:
	cRow ( const cArray2D<T> &array, const int row );	// Overloaded Const Default Constructor
	cRow ( cArray2D<T> &array, int row );				// Overloaded non-Const Default Constructor

	const T &operator[] ( int index ) const;		// Overloaded Const Subscript Operator
	T		&operator[] ( int index );				// Overloaded non-Const Subscript Operator

private:
	const cArray2D<T> *m_array2D;	//	Pointer to the array contained in the template class cArray2D

	int m_row;		// Private member variable m_row
};

#include "Row.inc"

#endif
