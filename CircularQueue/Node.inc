/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 5
* Filename:				Node.inc
************************************************************************/

#ifndef Node_i
#define Node_i

#include "Exception.h"
#include "Node.h"

/**************************************************************
* Node<T>::Node()
*
*		Purpose: Default Constructor. Initializes m_data
*				 to 0 and calls Clear() to set m_next/prev
*				 to null.
****************************************************************/
template <typename T>
Node<T>::Node() : m_data ( 0 )
{ 
	Clear();
} 

/**************************************************************
* Node<T>::Node(T data)
*
*		Purpose: Single Argument Constructor. Initializes
*				 m_data with data and calls Clear().
****************************************************************/
template <typename T>
Node<T>::Node (T data) : m_data ( data )
{
	Clear();
}

/**************************************************************
* Node<T>::Node(const Node &c) 
*
*		Purpose: Copy Constructor. Initializes m_data with a 
*				 copy of itself, c.m_data and calls Clear().
****************************************************************/
template <typename T>
Node<T>::Node(const Node &c) : m_data ( c.m_data )
{
	Clear();
}

/**************************************************************
* Node<T>::~Node()
*
*		Purpose: Destructor. Calls Clear() to set m_next/prev
*				 to null and deletes them.
****************************************************************/
template<typename T>
Node<T>::~Node()
{
	Clear();
	delete m_prev;
	delete m_next;
}

/**************************************************************
* Node<T> &Node<T>::operator= (const Node &rhs)
*
*		Purpose: Assignment Operator. Checks for self
*				 assignment, then sets m_data to rhs.m_data
*				 and returns a this pointer.
****************************************************************/
template<typename T>
Node<T> &Node<T>::operator= (const Node &rhs)
{
	//if ( this != rhs )
		m_data = rhs.m_data;
	return *this;
}

/**************************************************************
* T &Node<T>::GetData()
*
*		Purpose: Checks to make sure that m_data is valid
*				 before returning it.
*		  Entry: None.
*          Exit: Returns the const values of the private
*				 member variable data.
****************************************************************/
template<typename T>
T &Node<T>::GetData()
{
	return m_data;
}

/**************************************************************
* Node<T> *Node<T>::GetPrev()
*
*		Purpose: Checks to make sure that m_data is valid
*				 before returning it.
*		  Entry: None.
*          Exit: Returns the const values of the private
*				 member variable data.
****************************************************************/
template<typename T>
Node<T> *Node<T>::GetPrev()
{
	return m_prev;
}

/**************************************************************
* Node<T> *Node<T>::GetNext()
*
*		Purpose: Checks to make sure that m_data is valid
*				 before returning it.
*		  Entry: None.
*          Exit: Returns the const values of the private
*				 member variable data.
****************************************************************/
template<typename T>
Node<T> *Node<T>::GetNext()
{
	return m_next;
}

/**************************************************************
* const T &Node<T>::GetData() const
*
*		Purpose: Checks to make sure that m_data is valid
*				 before returning it.
*		  Entry: None.
*          Exit: Returns the const values of the private
*				 member variable data.
****************************************************************/
template<typename T>
const T &Node<T>::GetData() const
{
	return m_data;
}

/**************************************************************
* const Node<T> *Node<T>::GetPrev() const
*
*		Purpose: Checks to make sure that m_prev is valid
*				 before returning it.
*		  Entry: None.
*          Exit: Returns the const values of the private
*				 member variable prev.
****************************************************************/
template<typename T>
const Node<T> *Node<T>::GetPrev() const
{
	return m_prev;
}

/**************************************************************
* const Node<T> *Node<T>::GetNext() const
*
*		Purpose: Checks to make sure that m_next is valid
*				 before returning it.
*		  Entry: None.
*          Exit: Returns the const values of the private
*				 member variable next.
****************************************************************/

template<typename T>
const Node<T> *Node<T>::GetNext() const
{
	return m_next;
}


/**************************************************************
* void Node<T>::SetData(const T &data)
*
*		Purpose: Updates m_data with the values contained in
*				 data.
*		  Entry: Passes in data which is used to updated m_data.
*          Exit: None; Void function.
****************************************************************/
template<typename T>
void Node<T>::SetData(T &data)
{
	m_data = data;
}

/**************************************************************
* void Node<T>::SetNext(Node *nNode)
*
*		Purpose: Updates m_next with the pointer *nextNode.
*		  Entry: Passes in nextNode which is used to update
*				 m_next.
*          Exit: None; Void function.
****************************************************************/
template<typename T>
void Node<T>::SetNext(Node *nNode)
{
	m_next = nNode;
}

/**************************************************************
* void Node<T>::SetPrev ( Node *pNode )
*
*		Purpose: Updates m_prev with the pointer *prevNode.
*		  Entry: Passes in prevNode which is used to update
*				 m_prev.
*          Exit: None; Void function.
****************************************************************/
template<typename T>
void Node<T>::SetPrev(Node *pNode)
{
	m_prev = pNode;
}

/**************************************************************
* void Node<T>::Clear()
*
*		Purpose: Sets both private member variables next and
*				 prev to null.
*		  Entry: None.
*          Exit: None; Void function.
****************************************************************/
template<typename T>
void Node<T>::Clear()
{
	m_next = nullptr;
	m_prev = nullptr;
}

#endif