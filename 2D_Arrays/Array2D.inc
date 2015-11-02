/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 2
* Filename:				Array2D.inc
************************************************************************/

#ifndef Array2D_i
#define Array2D_i

#include "Exception.h"
#include "Array2D.h"

// Default Constructor
template <typename T>
cArray2D<T>::cArray2D() : m_row (0),
						  m_col (0),
						  m_array ( new T* [ 0 ] )
{
}

// Two Argument Constructor
template <typename T>
cArray2D<T>::cArray2D ( int row, int col ) : m_row   ( row ),
											 m_col   ( col ),
											 m_array ( new T* [ row ] )  
{
	for ( int r = 0; r < row; ++r )
			m_array [ r ] = new T [ col ];
}

// Copy Constructor
template <typename T>
cArray2D<T>::cArray2D ( const cArray2D<T> &rhs ) : cArray2D ( rhs.m_row, rhs.m_col )
{
	for ( int r= 0; r < m_row; ++r )
		for ( int c = 0; c < m_col; ++c )
			 m_array [ r ][ c ] = rhs.m_array [ r ][ c ];
}

// Destructor
template <typename T>
cArray2D<T>::~cArray2D()
{
	for ( int d = 0; d < m_row; ++d )
			delete[] m_array [ d ];
	delete[] m_array;
	m_array = 0;
}

// Overloaded Assignment Operator
template <typename T>
cArray2D<T> &cArray2D<T>::operator= ( const cArray2D<T> &rhs )
{
	if ( this != &rhs )
	{
		Resize(rhs.m_row, rhs.m_col);
		for ( int r = 0; r < m_row; ++r )
			for ( int c = 0; c < m_col; ++c )
				m_array [ r ][ c ] = rhs.Select ( r, c );
	}
	return *this;
}

// Overloaded Const Subscript Operator
template <typename T>
const cRow<T> cArray2D<T>::operator[] ( int index ) const
{
	ValidateIndex ( index );
	return cRow<T> (*this, index);
}

// Overloaded non-Const Subscript Operator
template <typename T>
cRow<T> cArray2D<T>::operator[] ( int index )
{
	ValidateIndex ( index );
	return cRow<T> ( *this, index );
}

/**************************************************************
* int cArray2D<T>::GetRow ()
*
*		Purpose: Returns the Array's row values  stored in 
*			     the private member variable m_row.				 
*		  Entry:  None.
*          Exit:  Returns the private member variable m_row,
*				  allowing the Select function to access the
*				  data.
****************************************************************/
template<typename T>
int cArray2D<T>::GetRow () const
{
	return m_row;
}

/**************************************************************
* int cArray2D<T>::Getcol ()
*
*		Purpose: Returns the Array's column values  stored in
*			     the private member variable m_col.
*		  Entry:  None.
*          Exit:  Returns the private member variable m_col,
*				  allowing the Select function to access the
*				  data.
****************************************************************/
template<typename T>
int cArray2D<T>::GetCol() const
{
	return m_col;
}

/**************************************************************
* void cArray2D<T>::SetRow ( int row )
*
*		Purpose:  Resized the Array's row values without any 
*				  loss of the Array's data integrity.
*		  Entry:  Takes in the value of int row. Initializes
*				  integer newRow with the value of int row only if
*				  the value of int row is not equal to what m_row
*				  already has stored.
*          Exit:  None; Void type.
* 	  Exception:  If the value of int row is Greater than
*				  or equal to m_row throw a bad bounds exception.
****************************************************************/
template <typename T>
void cArray2D<T>::SetRow ( int row )
{
	ValidateIndex ( row );
	Resize ( row, m_col );
}

/**************************************************************
* void cArray2D<T>::Setcol ( int col )
*
*		Purpose:  Resized the Array's column values without any
*				  loss of the Array's data integrity.
*		  Entry:  Takes in the value of int  col. Initializes
*				  integer newRow with the value of int row only if
*				  the value of int row is not equal to what m_col
*				  already has stored.
*          Exit:  None; Void type.
* 	  Exception:  If the value of int col is Greater than
*				  or equal to m_col throw a bad bounds exception.
****************************************************************/
template <typename T>
void cArray2D<T>::SetCol ( int col )
{
	ValidateIndex ( col );
	Resize ( m_row, col );
}

/**************************************************************
* void cArray2D<T>::Resize ( int srow, int scol )
*
*		Purpose:  Resizes the 2DArray's Rows and Columns. Used
*				  SetRow, SetCol, and the assignment operator.
*				  All 3 use the same method of resizing the
*				  array, this function makes it so that it's 
*				  written only once.
*		  Entry:  Takes in int srow and scol. These are used 
*				  to update m_row and m_col.
*          Exit:  None; Void type.
****************************************************************/
template <typename T>
void cArray2D<T>::Resize ( int srow, int scol )
{

		T** tmpArray = m_array;
		m_array = new T* [ srow ];
		for (int r = 0; r < m_row; ++r)
			m_array [ r ] = new T [ scol ];

		int rowNum = srow > m_row ? m_row : srow;
		int colNum = scol > m_col ? m_col : scol;
		m_row = srow;
		m_col = scol;
		for (int r = 0; r < rowNum; ++r)
			for (int c = 0; c < colNum; ++c)
				*(m_array [ r ] + c)  = *( tmpArray[ r ]+ c) ;
		for (int d = 0; d < m_row; ++d)
			delete[] tmpArray[d];
		delete[] tmpArray;
}

/**************************************************************
* void cArray2D<T>::ValidateIndex ( int row, int col ) const
*
*		Purpose: Validates the Array's row and column values
*				 by checking to make sure int row and int col
*				 are both in bounds. Meaning that they are not
*				 greater than or equal to their member variable
*				 counter parts.
*		  Entry: Takes in the value of int row and int col. 
*				 It then compares the values of row and col to 
*				 the values of m_row and m_col.
*          Exit: None; Void type.
* 	  Exception: If either of the comparisons above return true
*				 a Bad Bounds Exception will be thrown,
****************************************************************/
template <typename T>
void cArray2D<T>::ValidateIndex ( int row, int col ) const
{
	if ( ( ( row >= m_row ) || ( row < 0 ) ) || ( ( col >= m_col ) || ( col < 0 ) ) )
		throw cException ( "Range is outside Bounds; Bad Bounds Exception." );
}

/**************************************************************
* const T &cArray2D<T>::Select ( int row, int col ) const
*
*		Purpose: Validates the row and column values. Once
*				 validated it will return a const reference
*				 to the Array's row and column elements.
*		  Entry: Takes in the values of int row and int col
*				 and plugs them into the ValidateIndex function.
*          Exit: If the values of row and col are valid,
*				 it will return the const reference. If not
*				 valid an exception will be thrown.
* 	  Exception: If values of either int row and col are
*				 greater than or equal to the member variables
*				 m_row and m_col a Bad Bounds Exception will
*				 be thrown.
****************************************************************/
template <typename T>
const T &cArray2D<T>::Select ( int row, int col ) const
{
	ValidateIndex ( row, col );
	return m_array [ row ] [col ];
}

/**************************************************************
* T &cArray2D<T>::Select ( int row, int col ) 
*
*		Purpose: Validates the row and column values. Once
*				 validated it will return a non-const reference
*				 to the Array's row and column elements.
*		  Entry:  Takes in the values of int row and int col
*				  and plugs them into the ValidateIndex function.
*          Exit:  If the values of row and col are valid,
*				  it will return the non-const reference. If 
*				  not valid an exception will be thrown.
* 	  Exception:  If values of either int row and col are
*				  greater than or equal to the member variables
*				  m_row and m_col a Bad Bounds Exception will
*				  be thrown.
****************************************************************/
template <typename T>
T &cArray2D<T>::Select ( int row, int col )
{
	ValidateIndex ( row, col );
	return m_array [ row ][ col ];
}

#endif