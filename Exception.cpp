/***********************************************************
* Author:				Abdul Yahya
* Created:				09/29/15
* Updated:				10/03/15
* H.W. Number:			CST 211 Assignment 1
* Filename:				exception.cpp
************************************************************/

#include <iostream>

#include "Exception.h"
//
// Default Constructor
//
cException::cException () : m_msg ( new char [ 0 ] )
{
	// Verifying memory allocation
	if ( !m_msg )
	{
		throw ERR_MEM_ALLOC;
	}
}

//
// Overloaded Exception::Exception () Constructor
//
cException::cException ( char *msg ) : m_msg ( new char [ *msg ] )
{
	// Verifying memory allocation
	if ( !m_msg )
	{
		throw ERR_MEM_ALLOC;
	}
	else
	{
		// Copying Array values from m_array to c.m_array
		for ( int i = 0; i <= *msg; ++i )
		{
			m_msg[ i ];
		}
	}
}

//
// Deep-Copy Copy Constructor
//
cException::cException ( const cException &c ) : m_msg ( new char[ *c.m_msg ] )
{
	// Verifying memory allocation
	if ( !m_msg )
	{
		throw ERR_MEM_ALLOC;
	}
	else
	{
		// Copying Array values from m_array to c.m_array
		for ( int j = 0; j <= *m_msg; ++j )
		{
			m_msg[ j ] = c.m_msg [ j ];
		}
	}
}

//
// Deconstructor
//
cException::~cException()
{
	delete[] m_msg;
	m_msg = 0;
}

//
// Overloaded Assignment Operator constructor 
//
cException & cException::operator= ( const cException &rhs )
{
	// Checking to make sure there's no self assignment
	if ( this != &rhs )
	{
		delete[] m_msg;
		m_msg = 0;

		// Creating the array
		m_msg = ( new char [ *m_msg ] );

		// Verifying memory allocation
		if ( !m_msg )
		{
			throw ERR_MEM_ALLOC;
		}

		// Copying Array values from m_msg to rhs.m_msg
		for ( int k = 0; k <= *m_msg; ++k)
		{
			m_msg[ k ] = rhs.m_msg[ k ];
		}
	}

	return *this;
}

/**************************************************************
* Function: const char * cException::getMessage()
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
const char * cException::GetMessage() const
{
	return "A Bounds error Occurred. Please verify bounds and try again.";
}

/**************************************************************
* Function: void cException::setMessage ( char * msg )
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
void cException::SetMessage ( char * msg )
{
	msg = m_msg;
}