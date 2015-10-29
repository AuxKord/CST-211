/**********************************************************************
* Author:				Abdul Yahya
* Created:				09/29/15
* Updated:				10/20/15
* Filename:				Exception.h
************************************************************************/

#ifndef Exception_H
#define Exception_H

#include <iostream>

/************************************************************************ 
* Class: cException
*
* Purpose: Custom Dynamic Exceptions class used in all of
*		   our assignments. Capbale of throwing any string.
*
* Constructors:
*	cException ()
*		Initializes m_msg to 0.
*	Exception ( const char* msg )
*		Grabs initialized char *message and sets it to equal 
*		const char *msg.
*	Exception ( const Exception &rhs )
*		Copies message from above into rhs.message.
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
*
* Methods:
*	const char *GetMessage ()
*		This method gets the Message values.
************************************************************************/

class cException
{
public:
	cException  ();							// Default Constructor
	cException  ( char *msg);				// Single Argument Constructor
	cException  ( const cException &rhs );	// Copy Constructor
	~cException ();			// Destructor

	cException &operator= ( const cException &rhs ) // Overloaded Assignment Operator
	{
		SetMessage ( rhs.m_msg );
		return *this;
	}

	friend std::ostream &operator<< ( std::ostream &stream, const cException &rhs )		// Insertion Stream Operator
	{ 
		stream << rhs.GetMessage ();
		return stream;
	}

	const char *GetMessage () const;	// Get Message Method

	void SetMessage ( char *msg );		// Set Message Mutator

private:
	char *m_msg;	// Private Member Variable m_msg
};

#endif
