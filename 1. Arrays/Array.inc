/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 1
* Filename:				Array.inc
************************************************************************/
#ifndef Array_i
#define Array_i

/**************************************************************
* Array<T>::Array() 
*												*TODO*
*		Purpose:  Default Constructor. 
****************************************************************/
template <typename T>
Array<T>::Array() : m_length	   ( 0 ), 
					m_start_index  ( 0 ), 
				    m_array        ( nullptr )
{
}

/**************************************************************
* Array<T>::Array()
*												*TODO*
*		Purpose:  Default Constructor.
****************************************************************/
template <typename T>
Array<T>::Array (int length, int start_index) : m_length		 ( length ), 
											   m_start_index ( start_index ), 
											   m_array		 ( nullptr )
{
	if (length < 0)
		throw cException("Error: Cannot create an Array of Negative Rows.");
	m_array = new T[length];
}

/**************************************************************
* Array<T>::Array()
*												*TODO*
*		Purpose:  Default Constructor.
****************************************************************/
template <typename T>
Array<T>::Array(const Array<T> &c) : m_length	   ( c.m_length) , 
									 m_start_index ( c.m_start_index ), 
									 m_array	   ( nullptr )
{
	m_array = new T[m_length];

	for (int i = 0; i < m_length; ++i)
		m_array[i] = c.m_array[i];
}

/**************************************************************
* Array<T>::Array()
*												*TODO*
*		Purpose:  Default Constructor.
****************************************************************/
template <typename T>
Array<T>::~Array()
{
	if (m_array)
		delete[] m_array;

	m_array = nullptr;
	m_length = m_start_index = 0;
}

/**************************************************************
* Array<T>::Array()
*												*TODO*
*		Purpose:  Default Constructor.
****************************************************************/
template <typename T>
const Array<T>& Array<T>::operator=(const Array<T> &rhs)
{
	if (this != rhs)
	{ 
		m_length = rhs.m_length;
		m_start_index = rhs.m_start_index;
	
		if (m_array)
			delete[] m_array;

		m_array = new T[m_length];

		for (int i = 0; i < m_length; ++i)
			m_array[i] = rhs.m_array[i];
	}
	return *this;
}

/**************************************************************
* Array<T>::Array()
*												*TODO*
*		Purpose:  Default Constructor.
****************************************************************/
template<typename T>
int Array<T>::GetStartIndex() const
{
	return m_start_index;
}

/**************************************************************
* Array<T>::Array()
*												*TODO*
*		Purpose:  Default Constructor.
****************************************************************/
template<typename T>
int Array<T>::GetLength() const
{
	return m_length;
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
T &Array<T>::operator[](int index)
{
	if ( (index < m_start_index) || (index > m_start_index + m_length - 1) )
		throw cException("Error: Array is Out of Bounds!");

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
const T &Array<T>::operator[] (int index) const
{
	if ( (index < m_start_index) || (index > m_start_index + m_length - 1) )
		throw cException("Error: Array is Out of Bounds!");

	return m_array[index - m_start_index];
}

/*****************************************************************
* void Array<T>::setLength(int length)
* Purpose:
*		resize an array to the given length
*		(preserves as many elements as possible)
*****************************************************************/
template <typename T>
void Array<T>::SetLength(int length)
{
	T *tempA = m_array;

	if !(length = 0)
	{
		m_array = new T[length];
		int Min(length < m_length ? length : m_length);
		for (int i = 0; i < Min; ++i)
			m_array[i] = tempA[i];
	}
	else if (length <= 0)
		throw cException("Error: Out of Bounds.");
	else
		m_array = nullptr;

	delete[] tempA;
	m_length = length;
}


#endif
