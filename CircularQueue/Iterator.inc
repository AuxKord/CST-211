/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 5
* Filename:				Iterator.inc
************************************************************************/

#ifndef Iterator_i
#define Iterator_i

#include "Exception.h"
#include "Iterator.h"

/**************************************************************
* cIterator<T>::cIterator()
*
*		Purpose: Default Constructor. Initializes m_node
*				 to 0.
****************************************************************/
template <typename T>
cIterator<T>::cIterator() : m_node ( 0 )
{

}

/**************************************************************
* cIterator<T>::cIterator (cNode<T> *Node)
*
*		Purpose: Single Argument Constructor. Initializes
*				 m_node with Node.
****************************************************************/
template<typename T>
cIterator<T>::cIterator (cNode<T> *Node) : m_node ( Node )
{

}

/**************************************************************
* cIterator<T>::cIterator (const cIterator<T> &c) 
*
*		Purpose: Copy Constructor. Initializes m_node with a
*				 copy of itself, c.m_node.
****************************************************************/
template <typename T>
cIterator<T>::cIterator (const cIterator<T> &c) : m_node ( c.m_node )
{
	
}

/**************************************************************
* cIterator<T>::~cIterator()
*
*		Purpose: Destructor. Sets m_node to null.
****************************************************************/
template <typename T>
cIterator<T>::~cIterator()
{
	m_node = nullptr;
}

template<typename T>
const cNode<T>* cIterator<T>::GetNode() const
{
	return m_node;
}

/**************************************************************
* cIterator<T> & cIterator<T>::operator= (const cIterator<T> &rhs)
*
*		Purpose: Assignment Operator. Checks for self
*				 assignment, then sets m_node to rhs.m_node
*				 and returns a this pointer.
****************************************************************/
template <typename T>
cIterator<T> &cIterator<T>::operator= (const cIterator<T> &rhs)
{
	if (this != &rhs)
		m_node = rhs.m_node;
	return *this;
}

/**************************************************************
* T &cIterator<T>::operator* () const
*
*		Purpose: Dereference Operator.
****************************************************************/
template <typename T>
T &cIterator<T>::operator* () const
{
	return m_node->GetData();
}

/**************************************************************
* T *cIterator<T>::operator->() const
*
*		Purpose: Pointer Access Operator.
****************************************************************/
template <typename T>
T *cIterator<T>::operator->() const
{
	//TODO
}

/**************************************************************
* bool cIterator<T>::operator== (const cIterator<T> &rhs) const
*
*		Purpose: Comparison Operator. Checks if m_node is 
*				 == to rhs.m_node and returns true if they
*				 match.
****************************************************************/
template <typename T>
bool cIterator<T>::operator== (const cIterator<T> &rhs) const 
{
	return (m_node == rhs.m_node);
}

/**************************************************************
* bool cIterator<T>::operator!= (const cIterator<T> &rhs) const
*
*		Purpose: Comparison Operator. Checks if m_node is
*				 != to rhs.m_node and returns true if they
*				 match.
****************************************************************/
template <typename T>
bool cIterator<T>::operator!= (const cIterator<T> &rhs) const 
{
	return !(m_node == rhs.m_node);
}

/**************************************************************
* cIterator<T> cIterator<T>::operator++ ()
*
*		Purpose: Prefix Increment Operator. Checks if m_node
*				 is null then sets m_node to m_node's next
*				 node. Returns a this pointer.
****************************************************************/
template <typename T>
cIterator<T> cIterator<T>::operator++ ()
{
	m_node = m_node->GetNext();
	return *this;
}

/**************************************************************
* cIterator<T> cIterator<T>::operator-- ()
*
*		Purpose: Prefix Decrement Operator. Checks if m_node
*				 is null then sets m_node to m_node's prev
*				 node. Returns a this pointer.
****************************************************************/
template <typename T>
cIterator<T> cIterator<T>::operator-- ()
{
		m_node = m_node->GetPrev();
	return *this;
}

/**************************************************************
* cIterator<T> cIterator<T>::operator++ (int)
*
*		Purpose: Postfix Increment Operator. Creates a temp
*				 this pointer. Calls Prefix Increment operator
*				 to implement it's increment functionality.
*				 returns the temp this pointer.
****************************************************************/
template <typename T>
cIterator<T> cIterator<T>::operator++ (int)
{
	cIterator<T> temp(*this);
	operator++();
	return temp;
}

/**************************************************************
* cIterator<T> cIterator<T>::operator-- (int)
*
*		Purpose: Postfix Decrement Operator. Creates a temp
*				 this pointer. Calls Prefix Decrement operator
*				 to implement it's decrement functionality.
*				 returns the temp this pointer.
****************************************************************/
template <typename T>
cIterator<T> cIterator<T>::operator-- (int)
{
	cIterator<T> temp(*this);
		operator--();
	return temp;
}

#endif

