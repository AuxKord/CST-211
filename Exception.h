/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/13/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Exception.h
************************************************************/

#ifndef Exception_H
#define Exception_H

#include <iostream>
#include <string.h>


/************************************************************************
* Class: cException
*
* Constructors:
*	cException ()
*		Array, Rows, and Columns are initialized to 0.
*	cException( char *msg )
*		Overloading char pointer msg.
*	cException	( const cException &c )
*		Copy Constructor.
*
* Mutators:
*	void SetMessage ( char *msg )
*		This mutator copies the string msg from the char pointer msg.
*
* Methods:
*	int GetMessage ()
*		This method gets the Message values.
*************************************************************************/

class cException
{
public:
	cException  ();
	cException  ( char *msg );
	cException  ( const cException &c );
	~cException ();

	cException &operator= ( const cException &rhs );

	friend std::ostream &operator<< (std::ostream &stream, const cException &e) 
	{
		return stream << e.m_msg;
	}

	const char* GetMessage () const;

	void SetMessage ( char *msg );

private:
	char *m_msg;

};

#endif