/**********************************************************************
* Author:				Abdul Yahya
* Created:				09/29/15
* Updated:				10/17/15
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
*
* Methods:
*	const char *GetMessage ()
*		This method gets the Message values.
************************************************************************/

class cException
{
public:
	cException  ();
	cException  ( char* msg);
	cException  ( const cException &c );
	~cException ();

	cException &operator= ( const cException &rhs )
	{
		SetMessage ( rhs.m_msg );
		return *this;
	}

	friend std::ostream &operator<< ( std::ostream &stream, const cException &rhs )
	{ 
		stream << rhs.GetMessage ();
		return stream;
	}

	const char *GetMessage () const; 

	void SetMessage ( char *msg );

private:
	char *m_msg;
};

#endif
