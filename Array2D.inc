/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/04/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Array2D.inc
************************************************************/

#ifndef Array2D_i
#define Array2D_i

#include "Array2D.h"

template <typename T>
cArray2D<T>::cArray2D () : m_row   ( 0 ), m_col   ( 0 ), m_array ( new T [ 0 ] )
{
	// TODO: insert code here
}

template <typename T>
cArray2D<T>::cArray2D ( int row, int col ) : m_row   ( row ),
											 m_col   ( col )
{
	m_array = ( new T* [ row ] );
		
	for ( int i = 0; i < row; ++i )
	{
		m_array[i] = ( new T [ col ] );
	}
}

template <typename T>
cArray2D<T>::cArray2D ( const cArray2D &c ) : m_row   ( c.m_row ),
											  m_col   ( c.m_col ),
											  m_array ( c.m_array )
{
	// TODO: insert code here
}

template <typename T>
cArray2D<T>::~cArray2D ()
{
	delete []m_array;
	m_array = 0;
}

template <typename T>
cArray2D<T> &cArray2D<T>::operator= ( const cArray2D &rhs )
{
	// Checking to make sure there's no self assignment
	if ( this != &rhs )
	{
		delete []m_array;
		m_array = 0;

		// Copy start_index over to right hand side
		// Copy length over to right hand side
		row = rhs.row;
		col = rhs.col;

		// Creating the array
		// Check memory allocation
		m_array = ( new T* [ row ] );

		for (int i = 0; i < row; ++i)
		{
			m_array[i] = (new T[col]);
		}

		if ( !m_array )
		{
			cerr << "Error allocating memory!"
				<< std::endl;

			exit(EXIT_FAILURE);
		}
	}

	return *this;
}

template<typename T>
const cRow cArray2D<T>::operator[](int index) const
{
	return cRow ( *this, index );
}

template<typename T>
cRow cArray2D<T>::operator[] (int index)
{
	return cRow ( *this, index );
}

/**************************************************************
* Function: int cArray2D<T>::GetRow ()
*	
*		Purpose:  Reads the input data for each plant
*
*		  Entry:  lastPlantNumber is the declared size
*				  of the array plantArray.
*
*          Exit:  For plantNumber = 1 through lastPlantNumber:
*				  plantArray[ plantNumber - 1 ] equals the total
*                 production for plant number plantNumber.
****************************************************************/
template <typename T>
int cArray2D<T>::GetRow ()
{
	return m_row;
}

/**************************************************************
* Function: int cArray2D<T>::GetCol ()
*
*		Purpose:  Reads the input data for each plant
*
*		  Entry:  lastPlantNumber is the declared size
*				  of the array plantArray.
*
*          Exit:  For plantNumber = 1 through lastPlantNumber:
*				  plantArray[ plantNumber - 1 ] equals the total
*                 production for plant number plantNumber.
****************************************************************/
template <typename T>
int cArray2D<T>::GetCol ()
{
	return m_col;
}

/**************************************************************
* Function: void cArray2D<T>::SetRow ( int rows )
*
*		Purpose:  Reads the input data for each plant
*
*		  Entry:  lastPlantNumber is the declared size
*				  of the array plantArray.
*
*          Exit:  For plantNumber = 1 through lastPlantNumber:
*				  plantArray[ plantNumber - 1 ] equals the total
*                 production for plant number plantNumber.
*
* 	  Exception:  PlaceHolder
****************************************************************/
template <typename T>
void cArray2D<T>::SetRow ( int row )
{
	// Initializing newColumn
	row = m_row;

	// Checking if the value for new column is greater than column
	if ( row > m_row )
	{
		// Creating a temporary Array to store updated column values
		T **m_array = ( new T[ row ] );
		// Transferring new values to m_array 
		for ( row = 0; row < row; ++col)
		{
			m_array[ row ];
		}
		// Deleting and Cleaning memory from the old array
		delete[] m_array;
		m_array = 0;
	}
	else
	{
		// If newLength is not resized throw an exception
		// Exception;
	}
}

/**************************************************************
* Function: void cArray2D<T>::SetCol ( int columns )
*
*		Purpose:  Reads the input data for each plant
*
*		  Entry:  lastPlantNumber is the declared size
*				  of the array plantArray.
*
*          Exit:  For plantNumber = 1 through lastPlantNumber:
*				  plantArray[ plantNumber - 1 ] equals the total
*                 production for plant number plantNumber.
*	
* 	  Exception:  PlaceHolder
****************************************************************/
template <typename T>
void cArray2D<T>::SetCol ( int column )
{
	// Initializing newColumn
	column = m_col;

	// Checking if the value for new column is greater than column
	if ( column > m_col )
	{
		// Creating a temporary Array to store updated column values
		T **m_array = ( new T[ col ] );
		// Transferring new values to m_array 
		for ( col = 0; col < column; ++col) 
		{
			m_array[ col ];
		}
		// Deleting and Cleaning memory from the old array
		delete[] m_array;
		m_array = 0;
	}
	else
	{
		// If newLength is not resized throw an exception
		// Exception;
	}
}

/**************************************************************
* Function: T & cArray2D<T>::Select ( int row, int column )
*
*		Purpose:  Reads the input data for each plant
*
*		  Entry:  lastPlantNumber is the declared size
*				  of the array plantArray.
*
*          Exit:  For plantNumber = 1 through lastPlantNumber:
*				  plantArray[ plantNumber - 1 ] equals the total
*                 production for plant number plantNumber.
*
* 	  Exception:  PlaceHolder
****************************************************************/
template <typename T>
T &cArray2D<T>::Select ( int row, int column )
{
	if ( ( row >= m_row) || ( column >= m_col ) )
	{
		//throw Exception
	}

	return m_array [ row * m_col + column ];
}

#endif