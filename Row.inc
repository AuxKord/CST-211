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

/*****************************************************************
* Row(Array2D<T>& ar, int row)
* Constructor given mutable array reference
* sets m_array2D to point at ar
*****************************************************************/
template <typename T>
cRow<T>::cRow ( cArray2D<T> &array, int row ) : m_row     ( row ),
											    m_array2D ( &array )											    
{
}

/*****************************************************************
* Row(const Array2D& ar, const int row)
* Constructor given const array reference
* does the same thing as the other constructor
*****************************************************************/
template <typename T>
cRow<T>::cRow ( const cArray2D<T> &array, const int row ) : m_row	  ( row ),
														    m_array2D ( &array )	
{
}

/*****************************************************************
* const T& Row<T>::operator[] (int index) const
* returns a const reference to the desired Array2D element
*****************************************************************/
template <typename T>
const T &cRow<T>::operator[] ( int index ) const
{
	return m_array2D->Select ( m_row, index );
}

/*****************************************************************
* T& Row<T>::operator[] (int index)
* returns a mutable reference to the desired Array2D element
*****************************************************************/
template <typename T>
T &cRow<T>::operator[] ( int index )
{
	return ( const_cast <cArray2D<T> *> ( m_array2D ) )->Select(m_row, index);
	//return m_array2D ->select [(m_row, index)];
}

#endif