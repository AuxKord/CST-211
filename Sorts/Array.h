/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 2
* Filename:				Array.h
************************************************************************/

#ifndef ARRAY_H
#define ARRAY_H
#include "Exception.h"

/************************************************************************
* Class: cArray
*
* Purpose: Generic array class with range checking and adjustable
* 			starting index.
*	Constructors:
*		Array() : default constructor
*			sets size and starting index to 0
*
*		Array(int length, int start_index)
*			creates array of length length with starting index start_index
*
*		Array(const Array& ar)
*			copy constructor
*	Destructor:
*		~Array()
*			deletes contents of array
*
*	Operators:
*		const Array& operator=( const Array& ar)
*			assignment operator
*			de-allocates array and creates a new one with size and contents matching ar
*		T& operator[] (int index)
*			index operator
*			access the <index>th element of the array
*		const T& operator[] (int index) const
*			const version of index operator
*			does the same thing but const
*
*	Accessors:
*		getStartIndex()
*			returns starting index of the array
*		getLength()
*			returns the length of the array
*
*	Mutators:
*		setStartIndex(int start_index)
*			sets the starting index to start_index
*			(preserves array)
*		setLength(int length)
*			change the length of the array to <length>
*			(preserves as much data as possible)
************************************************************************/
template <typename T>
class Array
{
public:
	Array();
	Array(int length, int start_index);
	Array(const Array& c);
	~Array();

	const Array &operator= (const Array& rhs);

	const T &operator[] (int index) const;
	T		&operator[] (int index);

	int getStartIndex() const { return m_start_index; }
	int getLength() const { return m_length; }

	void setStartIndex(int start_index) { m_start_index = start_index; }
	void setLength(int length);

private:
	//array to store the data
	T* m_array;

	//length and start index of the array
	int m_length, m_start_index;

};

#include "Array.inc"

#endif