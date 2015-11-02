/**********************************************************************
* Author:				Abdul Yahya
* Created:				09/29/15
* Updated:				10/17/15
* Filename:				Exception.cpp
************************************************************************/
#include "Exception.h"

/**************************************************************
* cException::cException() 
*
*		Purpose: Default Constructor. Initializes m_mode to
*				 null and calls the GenericException function.
****************************************************************/
cException::cException() : m_msg (nullptr)
{
	GenericException();
}

/**************************************************************
* cException::cException(char *msg) 
*
*		Purpose: Single Argument Constructor. Sets m_msg to 
*				 null. Calls the SetMessage function and
*				 passes it char *msg.
****************************************************************/
cException::cException(char *msg) : m_msg ( nullptr )
{
	SetMessage(msg);
}

/**************************************************************
* cException::cException(const cException &c) 
*
*		Purpose: Copy Constructor. Initialized m_msg to null.
*				 Checks for self assignment. Calls the 
*				 function SetMessage and passes it c.m_msg.
****************************************************************/
cException::cException(const cException &c) : m_msg ( nullptr )
{
	if (this != &c)
		SetMessage(c.m_msg);
}

/**************************************************************
*cException::~cException()
*
*		Purpose: Destructor. Deletes the m_msg array and sets
*				 m_msg to null.
****************************************************************/
cException::~cException()
{
		delete[] m_msg;
		m_msg = nullptr;
}

/**************************************************************
* cException &cException::operator= (const cException &rhs)
*
*		Purpose: Assignment Operator. Checks for self 
*			     assignment. Deletes m_msg the checks if 
*				 rhs.m_msg already has data. If it does,
*				 it will create a new m_msg array with the 
*				 same length of rhs +1. Then it will copy
*				 the data over. If not, it calls the 
*				GenericException function.
****************************************************************/
cException &cException::operator= (const cException &rhs) 
{
	if (this != &rhs)
	{
		delete[] m_msg;

		if (rhs.m_msg)
		{
			m_msg = new char[strlen(rhs.m_msg) + 1];
			strcpy(m_msg, rhs.m_msg);
		}
		else
			GenericException();
	}
	return *this;
}

/**************************************************************
* const char *cException::getMessage()
*
*		Purpose:  Grabs and returns the private member variable
*				  m_msg allowing access to it through this
*				  function.
*
*		  Entry:  None.
*
*          Exit:  Returns the private member variable m_msg.
****************************************************************/
const char *cException::GetMessagee() const
{
	return m_msg;
}

/**************************************************************
* void cException::SetMessage ( const char *msg )
*
*		Purpose:  Deletes data from previous array then
*				  checks if m_msg is allocated,
*				  If allocated, it will create a new array 
*				  with the new data from *msg. If not allocated
*				  it will call the GenericException function.
*
*		  Entry:  const char pointer msg.
*
*          Exit:  None, void function.
****************************************************************/
void cException::SetMessage(char *msg)
{
	delete[] m_msg;

	if (msg)
	{
		m_msg = new char[strlen(msg) + 1];
		strcpy(m_msg, msg);
	}
	else
		GenericException();
}

/**************************************************************
* void cException::GenericException()
*
*		Purpose:  Creates a new m_msg array with a generic Exception. This
*				  is meant to be a catch all Exception.
*		  Entry:  const char pointer msg.
*
*          Exit:  None, void function.
****************************************************************/
void cException::GenericException()
{
		const char *unspecified("Catch All Exception; Specific Exception Unavailable."); // Catch all Exception message
		m_msg = new char[strlen(unspecified) + 1];	// Creates a new m_msg Array with the same size of the catch all message +1
		strcpy(m_msg, unspecified);		// Copies data from catch all message over to m_msg
}


