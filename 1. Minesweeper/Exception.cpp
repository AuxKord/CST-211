/**********************************************************************
* Author:				Abdul Yahya
* Created:				09/29/15
* Updated:				10/20/15
* Filename:				Exception.cpp
************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

#include <cstring>

#include "Exception.h"

// Default Constructor
cException::cException () : m_msg ( 0 )
{
}

// Single Argument Constructor
cException::cException ( char *msg ) : m_msg ( msg )
{
	SetMessage ( msg );
}

// Copy Constructor
cException::cException ( const cException &rhs ) : m_msg ( rhs.m_msg )
{
	SetMessage ( rhs.m_msg );
}

// Destructor
cException::~cException ()
{
		delete[] m_msg;
		m_msg = 0;
}

/**************************************************************
* Function: const char *cException::getMessage()
*
*		Purpose:  Grabs and returns the private member variable
*				  m_msg allowing access to it through this
*				  function.
*
*		  Entry:  None.
*
*          Exit:  Returns the private member variable m_msg.
****************************************************************/
const char *cException::GetMessage () const
{
	return m_msg;
} 

/**************************************************************
* Function: void cException::SetMessage ( const char *msg )
*
*		Purpose:  Checks m_msg for pervious allocation,
*				  If allocated, delete the allocation then
*				  proceed. If not allocated then proceed.
*				  Sets the various Exception Messages that 
*				  are copied from *msg.
*
*		  Entry:  const char pointer msg.
*
*          Exit:  None, void function.
****************************************************************/
void cException::SetMessage ( char *msg )
{
	m_msg = new char [ strlen ( msg ) ];
	strcpy ( m_msg, msg );
}


