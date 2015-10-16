/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/13/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Array2D.inc
************************************************************/

#ifndef Array2D_i
#define Array2D_i

#include "Array2D.h"

// Default Constructor
template <typename T>
cArray2D<T>::cArray2D() : m_row ( 0 ), m_col ( 0 ), m_array ( new T* [ 0 ] )
						  
{
}

// Overloaded Constructor
template <typename T>
cArray2D<T>::cArray2D ( int row, int col ) : m_row   ( row ),
											 m_col   ( col ),
											 m_array ( new T* [ row ] )
{
	for ( int rowCount = 0; rowCount < row; ++rowCount )
	{
		m_array [ rowCount ] = new T [ col ];
		for (int colCount = 0; colCount < col; ++colCount)
		{
			m_array[rowCount][colCount] = 0;
		}
	}
}

// Copy Constructor
template <typename T>
cArray2D<T>::cArray2D ( const cArray2D &c ) : m_row   ( c.m_row ),
										      m_col   ( c.m_col ),
										      m_array ( new T* [ c.m_row ] )
{
	for ( int rowCount = 0; rowCount < m_row; ++rowCount )
	{
		m_array[ rowCount ] = new T [ c.m_col ];
		for ( int colCount = 0; colCount < m_col; ++colCount )
		{
			m_array [ rowCount ][ colCount ] = c.m_array [ rowCount ][ colCount ];
		}
	}
	
	//copy(c.m_array);
}

// Destructor
template <typename T>
cArray2D<T>::~cArray2D ()
{	
	if ( !m_array )
	{
		//throw cException ( "Bad Memory Allocation" );
		//throw ERR_BAD_MEM;
	}
		for (int dRow = 0; dRow < m_row; ++dRow)
		{
			delete[] m_array[dRow];
		}
		delete[] m_array;
}

// Assignment Operator Overload Constructor
template <typename T>
cArray2D<T> &cArray2D<T>::operator= ( const cArray2D &rhs )
{
	if ( this != &rhs )
	{
		for (int dRow = 0; dRow < m_row; ++dRow)
		{
			delete[] m_array [ dRow] ;
		}
		delete[] m_array;

		// Copying member variables over to rhs
		//m_row = rhs.m_row;
		//m_col = rhs.m_col;
		copy(rhs);

		/*
		// New Array
		m_array = new T* [ rhs.m_row ];

		// Iterate through the array copying m_array values
		// over to rhs.m_array
		for ( int rowCount = 0; rowCount < m_row; ++rowCount )
		{
			m_array [ rowCount ] = new T [ rhs.m_col ];

			for ( int colCount = 0; colCount < m_col; ++colCount )
			{
				m_array [ rowCount ][ colCount ] = rhs.m_array [ rowCount ][ colCount ];
			}
		}
		*/
	}
	return *this;
}

// Const Subscript Operator Constructor
template<typename T>
const cRow<T> cArray2D<T>::operator[] ( int index ) const
{
	return cRow<T>(m_row, index);   
	//return cRow<T> ( *this, index );
}

// Non-Const Subscript Operator Constructor
template<typename T>
cRow<T> cArray2D<T>::operator[] ( int index )
{
	return cRow<T> (m_row, index);
	//return cRow<T> ( *this, index );
}

/**************************************************************
* Function: int cArray2D<T>::GetRow ()
*
*		Purpose:  Reads the input data for each row value 
*				  stored in m_row.
*
*		  Entry:  None.
*
*          Exit:  Returns the private member variable m_row, 
*				  allowing the Select function to access the
*				  data. 
****************************************************************/
template <typename T>
int cArray2D<T>::GetRow ()
{
	return m_row;
}

/**************************************************************
* Function: int cArray2D<T>::GetCol ()
*
*		Purpose:  Reads the input data for each column value
*				  stored in m_col.
*
*		  Entry:  None.
*
*          Exit:  Returns the private member variable m_col, 
*				  allowing the Select function to access the
*				  data. 			  
****************************************************************/
template <typename T>
int cArray2D<T>::GetCol ()
{
	return m_col;
}

/**************************************************************
* Function: void cArray2D<T>::SetRow ( int row )
*
*		Purpose:  Sets the row values of our template class
*				  cArray2D.
*
*		  Entry:  Takes in the value of integer row. Initializes
*				  integer newRow with the value of int row only if 
*				  the value of int row is not equal to what m_row
*				  already has stored.
*
*          Exit:  Shallow copies int row over to the
*				  private member variable m_row.
*
* 	  Exception:  If the value of int row is Greater than
*				  or equal to m_row throw a bad bounds exception.
****************************************************************/
template <typename T>
void cArray2D<T>::SetRow ( int row )
{
	/*
	for (int r = 0; r < row; ++r)
	{
		m_row = row;
	}
	*/
	m_row = row;
	//m_array[row * m_col + row];
}

/**************************************************************
* Function: void cArray2D<T>::SetCol ( int column )
*
*		Purpose:  Sets the column values of our template class
*				  cArray2D.
*
*		  Entry:  Takes in the value of integer column. 
*				  Initializes integer newCol with the value 
*				  of int column only if the value of int column
*				  is not equal to what m_col already has stored.
*
*          Exit:  Shallow copies int column over to the
*				  private member variable m_col.
*
* 	  Exception:  If the value of int row is Greater than
*				  or equal to m_row throw a bad bounds exception.
****************************************************************/
template <typename T>
void cArray2D<T>::SetCol ( int column )
{
	/*
	for ( int c = 0; c < column; ++c )
	{
		m_col = column;
	}
	*/
	m_col = column;
	//m_array[m_col(column)];
	//m_array[column * m_row + column];
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
*				  are greater than or equal to member variables 
*				  m_row and m_col throw a Bad Bounds Exception.
****************************************************************/
template <typename T>
T &cArray2D<T>::Select ( int row, int column )
{

	//return m_array[row][column];
	return m_array [ row * m_col + column ];
}

#endif