/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/10/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Row.inc
************************************************************/

#ifndef Row_i
#define Row_i

#include "Row.h"

template<typename T>
cRow<T>::cRow  (cArray2D<T> &array, int row ) : m_row	  ( row ),
											    m_array2D ( array )
{
}

template<typename T>
const T &cRow<T>::operator[] ( int column ) const
{
	/*
	try
	{
		if ( column >= m_row )
		{
			throw cException();
		}
	}
	catch (cException &e)
	{
		std::cout << e.GetMessage();
	}
	*/
	return m_array2D.Select ( m_row, column );
}

template<typename T>
T &cRow<T>::operator[] ( int column )
{
	/*
	try
	{
		if ( column >= m_row )
		{
			throw cException();
		}
	}
	catch (cException &e)
	{
		std::cout << e.GetMessage();
	}
	*/
	return m_array2D.Select ( m_row, column );
}


#endif