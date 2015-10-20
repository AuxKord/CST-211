/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 2
* Filename:				Row.inc
************************************************************************/

#ifndef Row_i
#define Row_i

#include "Exception.h"

// Two Argument Constructor
template <typename T>
cRow<T>::cRow ( cArray2D<T> &array, int row ) : m_row     ( row ),
											    m_array2D ( &array )											    
{
}

// Two Argument Const Constructor
template <typename T>
cRow<T>::cRow ( const cArray2D<T> &array, const int row ) : m_row	  ( row ),
														    m_array2D ( &array )	
{
}

// Const Array Subscript Operator
template <typename T>
const T &cRow<T>::operator[] ( int index ) const
{
	
	return m_array2D->Select( m_row, index );
}

// non-Const Array Subscript Operator
template <typename T>
T &cRow<T>::operator[] ( int index )
{
	return const_cast <T &> ( m_array2D->Select( m_row, index ) );

}

#endif