/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/10/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Array2D.inc
************************************************************/

#ifndef Array2D_i
#define Array2D_i

#include "Array2D.h"

// Default Constructor
template <typename T>
cArray2D<T>::cArray2D() : m_row ( 0 ), 
						  m_col ( 0 ), 
						  m_array ( new T* [ 0 ] )
{
	// Verifying Memory Allocation
	if ( !m_array )
	{
		// Throw Memory Allocation Exception
	}
}

// Overloaded Constructor
template <typename T>
cArray2D<T>::cArray2D ( int row, int col ) : m_row   ( row ),
											 m_col   ( col ),
											 m_array ( new T* [ row ] )
{
	// Verifying Memory Allocation
	if ( !m_array )
	{
		// Throw Memory Allocation Exception
	}
	else
	{
		// Allocate memory for the new array
		for ( int i = 0; i < row; ++i )
		{
			m_array [ i ] = ( new T [ col ] );
		}
	}
}

// Copy Constructor
template <typename T>
cArray2D<T>::cArray2D ( const cArray2D &c ) : m_row   ( c.m_row ),
										      m_col   ( c.m_col ),
										      m_array ( new T* [ c.m_array ] )
{
	// Verifying Memory Allocation
	if ( !m_array )
	{
		// Throw Memory Allocation Exception
	}
	else 
	{
		// Iterate through the array copying m_array values
		// over to c.m_array
		for ( int rows = 0; rows < m_row; ++rows )
		{
			for ( int cols = 0; cols < m_col; ++cols )
			{
				m_array [ row ][ col ] = c.m_array [ row ][ col ];
			}
		}
	}
}

// Destructor
template <typename T>
cArray2D<T>::~cArray2D ()
{
	for ( int rows = 0; rows < m_row; ++rows )
	{
		for ( int cols = 0; cols < m_col; ++cols )
		{
			delete[] m_array [ row ][ col ];
		}
	}
	delete[] m_array;
	m_array = 0;
}

// Assignment Operator Overload Constructor
template <typename T>
cArray2D<T> &cArray2D<T>::operator= ( const cArray2D &rhs )
{
	// Checking to make sure there's no self assignment
	if ( this != &rhs )
	{
		for ( int rows = 0; rows < m_row; ++rows )
		{
			for ( int cols = 0; cols < m_col; ++cols )
			{
				delete[] m_array [ row ][ col ];
			}
		}
		delete[] m_array;
		m_array = 0;

		// Copy row over to right hand side
		// Copy col over to right hand side
		m_row = rhs.m_row;
		m_col = rhs.m_col;

		// Create new array
		m_array = ( new T* [ row ] );

		// Allocate memory for the new array
		for ( int i = 0; i < row; ++i )
		{
			m_array [ i ] = ( new T [ col ] );
		}

		// 
		if ( !m_array )
		{
			// Throw Memory Allocation Exception
		}
		else
		{
			// Iterate through the array copying m_array values
			// over to rhs.m_array
			for ( int rows = 0; rows < m_row; ++rows )
			{
				for ( int cols = 0; cols < m_col; ++cols )
				{
					m_array [ row ][ col ] = rhs.m_array [ row ][ col ];
				}
			}
		}

	}
	else
	{
		// Throw Self Assignment Exception
	}

	return *this;
}


template<typename T>
const cRow<T> cArray2D<T>::operator[] ( int index ) const
{
	return cRow<T> ( *this, index );
}

template<typename T>
cRow<T> cArray2D<T>::operator[] ( int index )
{
	return cRow<T> ( *this, index );
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
	// SetRow is not a deep copy function
	// It is a shallow copy
	// Making it a deep copy will create a
	// 2D array where each row has a different value
	row = m_row;

	/*
		Improved upon Original Implementation

	// Creating a temporary Array to store updated row values
	T** m_array = ( new T* [ row ] );

	int newRow = ( m_row > row > m_row : row );

	if (newRow != m_row)
	{
		// Transferring new values to m_array 
		for ( row = 0; row < row; ++col )
		{
			m_array [ row ];
		}
		// Deleting and Cleaning memory from the old array
		delete[] m_array;
		m_array = 0;
	}
	else
	{
		// Throw Exception
	}

	// Setting membervariable row to new row value
	row = m_row;

	****************************************************************************
	  Original Implementation

	// Setting row to member variable m_row
	row = m_row;

	// Checking if the value for new row is greater than row
	if ( row > m_row )
	{
		// Creating a temporary Array to store updated row values
		T **m_array = ( new T [ row ] );
		// Transferring new values to m_array 
		for ( row = 0; row < row; ++col )
		{
			m_array [ row ];
		}
		// Deleting and Cleaning memory from the old array
		delete[] m_array;
		m_array = 0;
	}
	else
	{
		// Throw Exception
	}
	*/
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
	// SetCol is not a deep copy function
	// It is a shallow copy
	// Making it a deep copy will create a
	// 2D array where each column has a different value
	column = m_col;

	/*
		Original Implementation

	// Setting column to member variable m_col
	column = m_col;

	// Checking if the value for new column is greater than column
	if ( column > m_col )
	{
		// Creating a temporary Array to store updated column values
		T **m_array = ( new T [ col ] );
		// Transferring new values to m_array 
		for ( col = 0; col < column; ++col )
		{
			m_array [ col ];
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
	*/
}

/**************************************************************
* Function: T & cArray2D<T>::Select ( int row, int column )
*
*		Purpose:  Allows Template Class cRow to access cArray2D's
*				  Row and Column values. 
*
*		  Entry:  Integers row and column which is what makes 
*				  up our multi-dimensional array.
*
*          Exit:  Returns our 2D array cArray2D's row and column
*				  values.
*
* 	  Exception:  If values of either integers row and column 
*				  are greater than member variables m_row and 
*		          m_col an Out of Bounds Exception will be 
*			      thrown.
****************************************************************/
template <typename T>
T &cArray2D<T>::Select ( int row, int column )
{
	if ( ( row > m_row ) || ( column > m_col ) )
	{
		// Throw Bounds Exception
	}

	return m_array [ row ] [ column ];
}

#endif