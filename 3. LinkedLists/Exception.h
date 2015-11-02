/**********************************************************************
* Author:				Abdul Yahya
* Created:				09/29/15
* Updated:				10/25/15
* Filename:				Exception.h
************************************************************************/
#ifndef Exception_H
#define Exception_H

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

/************************************************************************
* Class: cException
*
* Purpose: Custom Dynamic Exceptions class used in all of
*		   our assignments. Capbale of throwing any string.
*
* Constructors:
*	cException ()
*		Initializes char *message to Catch all Exception.
*	Exception ( const char* msg )
*		Grabs initialized char *message and sets it to equal
*		const char *msg.
*	Exception ( const Exception &c )
*		Copies message from above into c.message.
*
* Operators:
*	&operator= ( const cException &rhs )
*		Overloaded Assignment Operator takes in a reference
*		to const cException &rhs or Right Hand Side.
*	&operator<< ( ostream &stream, const cException &rhs )
*		Overloaded Instertion Operator takes in a reference
*		to const cException &rhs and uses stream to insert string
*		into &rhs.
*
* Mutators:
*	void SetMessage ( const char *msg )
*		Sets the string msg from the char pointer msg.
*	void GenericException()
*		Creates a new m_msg array with a generic Exception. This
*		is meant to be a catch all Exception.
* Methods:
*	const char *GetMessage ()
*		This method gets the Message values.
************************************************************************/

class cException
{

public:


	cException();						// Default Constructor
	cException(char* msg);				// Single Argument Constructor
	cException(const cException &c);	// Copy Constructor
	~cException();		// Destructor

	cException &operator= (const cException &rhs);	// Assignment Operator

	friend std::ostream &operator<< (std::ostream &stream, const cException &rhs)	// Insertion Operator
	{
		stream << rhs.GetMessagee();
		return stream;
	}

	const char *GetMessagee() const;	// GetMessage Function

	void SetMessage(char *msg);		// SetMessage Function
	void GenericException();		// Catch All Exception Function

private:

	char *m_msg;	// Private member variable m_msg
};

#endif
