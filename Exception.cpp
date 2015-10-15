/***********************************************************
* Author:				Abdul Yahya
* Created:				09/29/15
* Updated:				10/13/15
* H.W. Number:			CST 211 Assignment 1
* Filename:				exception.cpp
************************************************************/
#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Exception.h"

// Default Constructor
cException::cException () : m_msg ( 0 )
{
}

// Overloaded Exception::Exception () Constructor
cException::cException ( char *msg ) : m_msg ( new char [ strlen ( msg ) + 1 ] )
{
}

// Deep-Copy Copy Constructor
cException::cException ( const cException &c ) : m_msg ( new char[ strlen ( c.m_msg ) +1 ] )
{
	strcpy ( m_msg, c.m_msg );
}

// Deconstructor
cException::~cException()
{
	// Verifying m_msg allocation
	if (!m_msg)
	{
	}

	delete[] m_msg;
	m_msg = 0;
}

// Overloaded Assignment Operator constructor 
cException & cException::operator= ( const cException &rhs )
{
	// Checking to make sure there's no self assignment
	if ( this != &rhs )
	{
		delete[] m_msg;
		m_msg = 0;

		// Creating the array
		m_msg = new char [ strlen ( rhs.m_msg ) +1 ] ;

		strcpy ( m_msg, rhs.m_msg );
	}
	return *this;
}

/**************************************************************
* Function: const char * cException::getMessage()
*
*		Purpose:  Get the Char array m_msg containing an array
*				  of the Exception Message.
*
*		  Entry:  None.
*
*          Exit:  Returns the private member variable m_msg,
*				  allowing SetMessage to copy the string msg
*				  into it.
****************************************************************/
const char * cException::GetMessage() const
{
	return m_msg;
}

/**************************************************************
* Function: void cException::setMessage ( char * msg )
*
*		Purpose:  Set the various Exception Messages 
*				  that are set to be thrown.
*
*		  Entry:  Char pointer msg.
*
*          Exit:  Returns the private member variable m_row,
*				  allowing the Select function to access the
*				  data.
****************************************************************/
void cException::SetMessage ( char * msg )
{
	strcpy ( msg, m_msg );
}