/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 1
* Filename:				Array.h
************************************************************************/

#ifndef ARRAY_H
#define ARRAY_H
#include "Exception.h"

/************************************************************************
* Class: cArray
*
* Purpose: 
*	Constructors:
*		Array() 
*		Array(int length, int start_index = 0)
*		Array(const Array &c)
*			
*	Destructor:
*		~Array()
*
*	Operators:
*		const Array &operator=  (const Array &rhs)
*		const T		&operator[] (int index) const
*		T			&operator[] (int index)
*
*	Accessors:
*		GetStartIndex()
*		GetLength()
*
*	Mutators:
*		SetStartIndex(int start_index)
*		SetLength(int length)
************************************************************************/
template <typename T>
class Array
{
public:
	Array();
	Array(int length, int start_index = 0);
	Array(const Array &c);
	~Array();

	const Array &operator=  (const Array &rhs);
	const T		&operator[] (int index) const;
	T			&operator[] (int index);

	int GetStartIndex() const;
	int GetLength() const;

	void SetStartIndex(int start_index) { m_start_index = start_index; }
	void SetLength(int length);

private:
	T* m_array;

	int m_length;
	int	m_start_index;

};

#include "Array.inc"

#endif