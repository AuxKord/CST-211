/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 1
* Filename:				Array.inc
************************************************************************/
#ifndef Array_i
#define Array_i

template <typename T>
Array<T>::Array() : m_length(0), m_start_index(0), m_array(new T[ 0 ])
{
}

template <typename T>
Array<T>::Array(int length, int start_index) : m_length(length), m_start_index(start_index)//, m_array(new T [length])
{
	if (length <= 0)
		throw cException("Tried to create row with invalid length!");
	m_array = new T[length];
}

template <typename T>
Array<T>::Array(const Array<T>& c) : m_length(c.m_length), m_start_index(c.m_start_index), m_array(c.m_array)
{
	m_array = new T[c.m_length];
	for (int i = 0; i < m_length; ++i)
		m_array[i] = c.m_array[i];
}

template <typename T>
Array<T>::~Array()
{
	if (m_array)
		delete[] m_array;
	m_array = 0;
}

template <typename T>
const Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	if (this != rhs)
	{ 
		if (m_array)
			delete[] m_array;

		m_array = new T[rhs.m_length];
		m_length = rhs.m_length;
		m_start_index = rhs.m_start_index;

		for (int i = 0; i < rhs.m_length; ++i)
			m_array[i] = rhs.m_array[i];
	}
	return *this;
}

/*****************************************************************
* index operator (operator[])
* returns a mutable reference to an element in the array
* takes:
*	int index - the index of the element to be accessed
*
* also performs range checking
*****************************************************************/
template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < m_start_index)
		throw cException("Index below range!");
	else if (index >= m_start_index + m_length)
		throw cException("Index above range!");

	return m_array[index - m_start_index];
}

/*****************************************************************
* const index operator (const T& operator[] (int index) const)
* returns a const reference to an element in the array
* takes:
*	int index - the index of the element to be accessed
*
* also performs range checking
*****************************************************************/
template <typename T>
const T& Array<T>::operator[] (int index) const
{
	if (index < m_start_index)
		throw cException("Index is too low.");
	else if (index >= m_start_index + m_length - 1)
		throw cException("Index is too high.");

	return m_array[index - m_start_index];
}

/*****************************************************************
* void Array<T>::setLength(int length)
* Purpose:
*		resize an array to the given length
*		(preserves as many elements as possible)
*****************************************************************/
template <typename T>
void Array<T>::setLength(int length)
{
	T *pArray = m_array;
	int pLength = m_length;
	m_array = new T[length];
	m_length = length;
	for (int i = 0; i < min(oldLen, length); ++i)
	{
		m_array[i] = old[i];
	}
	delete[] pArray;
}

#endif
