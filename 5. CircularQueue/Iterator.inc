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
* Iterator<T>::Iterator()
*
*		Purpose: Default Constructor. Initializes m_node
*				 to 0.
****************************************************************/
template <typename T>
Iterator<T>::Iterator() : m_node ( 0 )
{

}

/**************************************************************
* Iterator<T>::Iterator (Node<T> *Node)
*
*		Purpose: Single Argument Constructor. Initializes
*				 m_node with Node.
****************************************************************/
template<typename T>
Iterator<T>::Iterator (Node<T> *Node) : m_node ( Node )
{

}

/**************************************************************
* Iterator<T>::Iterator (const Iterator<T> &c) 
*
*		Purpose: Copy Constructor. Initializes m_node with a
*				 copy of itself, c.m_node.
****************************************************************/
template <typename T>
Iterator<T>::Iterator (const Iterator<T> &c) : m_node ( c.m_node )
{
	
}

/**************************************************************
* Iterator<T>::~Iterator()
*
*		Purpose: Destructor. Sets m_node to null.
****************************************************************/
template <typename T>
Iterator<T>::~Iterator()
{
	m_node = nullptr;
}

template<typename T>
const Node<T>* Iterator<T>::GetNode() const
{
	return m_node;
}

/**************************************************************
* Iterator<T> & Iterator<T>::operator= (const Iterator<T> &rhs)
*
*		Purpose: Assignment Operator. Checks for self
*				 assignment, then sets m_node to rhs.m_node
*				 and returns a this pointer.
****************************************************************/
template <typename T>
Iterator<T> &Iterator<T>::operator= (const Iterator<T> &rhs)
{
	if (this != &rhs)
		m_node = rhs.m_node;
	return *this;
}

/**************************************************************
* T &Iterator<T>::operator* () const
*
*		Purpose: Dereference Operator.
****************************************************************/
template <typename T>
T &Iterator<T>::operator* () const
{
	return m_node->GetData();
}

/**************************************************************
* T *Iterator<T>::operator->() const
*
*		Purpose: Pointer Access Operator.
****************************************************************/
template <typename T>
T *Iterator<T>::operator->() const
{
	//TODO
}

/**************************************************************
* bool Iterator<T>::operator== (const Iterator<T> &rhs) const
*
*		Purpose: Comparison Operator. Checks if m_node is 
*				 == to rhs.m_node and returns true if they
*				 match.
****************************************************************/
template <typename T>
bool Iterator<T>::operator== (const Iterator<T> &rhs) const 
{
	return (m_node == rhs.m_node);
}

/**************************************************************
* bool Iterator<T>::operator!= (const Iterator<T> &rhs) const
*
*		Purpose: Comparison Operator. Checks if m_node is
*				 != to rhs.m_node and returns true if they
*				 match.
****************************************************************/
template <typename T>
bool Iterator<T>::operator!= (const Iterator<T> &rhs) const 
{
	return !(m_node == rhs.m_node);
}

/**************************************************************
* Iterator<T> Iterator<T>::operator++ ()
*
*		Purpose: Prefix Increment Operator. Checks if m_node
*				 is null then sets m_node to m_node's next
*				 node. Returns a this pointer.
****************************************************************/
template <typename T>
Iterator<T> Iterator<T>::operator++ ()
{
	m_node = m_node->GetNext();
	return *this;
}

/**************************************************************
* Iterator<T> Iterator<T>::operator-- ()
*
*		Purpose: Prefix Decrement Operator. Checks if m_node
*				 is null then sets m_node to m_node's prev
*				 node. Returns a this pointer.
****************************************************************/
template <typename T>
Iterator<T> Iterator<T>::operator-- ()
{
		m_node = m_node->GetPrev();
	return *this;
}

/**************************************************************
* Iterator<T> Iterator<T>::operator++ (int)
*
*		Purpose: Postfix Increment Operator. Creates a temp
*				 this pointer. Calls Prefix Increment operator
*				 to implement it's increment functionality.
*				 returns the temp this pointer.
****************************************************************/
template <typename T>
Iterator<T> Iterator<T>::operator++ (int)
{
	Iterator<T> temp(*this);
	operator++();
	return temp;
}

/**************************************************************
* Iterator<T> Iterator<T>::operator-- (int)
*
*		Purpose: Postfix Decrement Operator. Creates a temp
*				 this pointer. Calls Prefix Decrement operator
*				 to implement it's decrement functionality.
*				 returns the temp this pointer.
****************************************************************/
template <typename T>
Iterator<T> Iterator<T>::operator-- (int)
{
	Iterator<T> temp(*this);
		operator--();
	return temp;
}

#endif

