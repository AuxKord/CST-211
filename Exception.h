/***********************************************************
* Author:				Abdul Yahya
* Created:				10/04/15
* Updated:				10/10/15
* H.W. Number:			CST 211 Assignment 2
* Filename:				Exception.h
************************************************************/

#ifndef Exception_H
#define Exception_H

#define ERR_MEM_ALLOC 1

#include <iostream>

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
		return stream << "Handled Exception: " << e.m_msg;
	}

	const char* GetMessage () const;

	void SetMessage ( char *msg );

private:
	char *m_msg;

};

#endif