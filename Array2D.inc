/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/04/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Array2D.h
************************************************************/

#ifndef Array2D_i
#define Array2D_i

#include "Array2D.h"

/**************************************************************
*	  Purpose:  Reads the input data for each plant
*
*         Entry:  lastPlantNumber is the declared size
*		      of the array plantArray.
*
*          Exit:  For plantNumber = 1 through lastPlantNumber:
*		      plantArray[ plantNumber - 1 ] equals the total
*                 production for plant number plantNumber.
****************************************************************/

template <typename T>
cArray2D<T>::Array2D() : m_row(), m_col(), m_array ()
{
	// TODO: insert code here
}

template <typename T>
cArray2D<T>::Array2D ( int row, int col )
{
	// TODO: insert code here
}

template <typename T>
cArray2D<T>::Array2D ( const Array2D & c )
{
	// TODO: insert code here
}

template <typename T>
cArray2D<T>::~Array2D ()
{
	// TODO: insert code here
}

template <typename T>
Array2D & cArray2D<T>::operator= ( const Array2D & rhs )
{
	// TODO: insert code here
}

template <typename T>
Row<T> cArray2D<T>::operator[] ( int index )
{
	// TODO: insert code here
	return Row<T>();
}

template <typename T>
int cArray2D<T>::GetRow()
{
	// TODO: insert code here
	return 0;
}

template <typename T>
int cArray2D<T>::GetCol()
{
	// TODO: insert code here
	return 0;
}

template <typename T>
void cArray2D<T>::SetRow ( int rows )
{
	// TODO: insert code here
}

template <typename T>
void cArray2D<T>::SetCol ( int columns )
{
	// TODO: insert code here
}

template <typename T>
T & cArray2D<T>::Select ( int row, int column )
{
	// TODO: insert return statement code here
}


#endif