/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 4
* Filename:				Iterator.h
************************************************************************/

#ifndef Iterator_H
#define Iterator_H

#include "Node.h"

/************************************************************************
* Class: cIterator
*
* Purpose:
*
* Constructors:
*	cIterator ()
*		Initializes m_node to null
*	cIterator ( cNode<T> *Node )
*		Sets m_node to pointer Node
*	cIterator ( const cNode<T> &c )
*		Copies m_node to c.m_node
*	~cIterator ()
*		Sets m_node to null
*
* Operators:
*	cIterator &operator= ( const cIterator &rhs )
*		Assigns m_node values over to rhs
*	T &operator* () const
*		De-references const m_node if it's null
*	T *operator-> () const
*		TODO
*	bool operator== ( const cIterator &rhs ) const
*		Compares iterator m_node to rhs m_node
*	bool operator!= ( const cIterator &rhs ) const
*		Compares iterator m_node to rhs m_node
*	cIterator operator++ ()
*		Uses prefix to increment iterator
*	cIterator operator-- ()
*		Uses prefix to decrement iterator
*	cIterator operator++ ( int )
*		Uses postfix to increment iterator
*	cIterator operator-- ( int )
*		Uses postfix to decrement iterator
************************************************************************/

template <typename T>
class cIterator
{
public:
	cIterator();						// Default Constructor
	cIterator (cNode<T> *Node);			// Single Argument Constructor
	cIterator (const cIterator<T> &c);	// Copy Constructor
	~cIterator();						// Destructor

	const cNode<T> *GetNode() const;

	cIterator &operator= (const cIterator<T> &rhs);		// Assignment Operator Overload
	T		  &operator*() const;						// De-reference Operator
	T		  *operator->() const;						// Pointer Access Operator

	bool operator== (const cIterator<T> &rhs) const;		// Comparison Operator Overload
	bool operator!= (const cIterator<T> &rhs) const;		// Comparison Operator Overload

	cIterator operator++();	// Prefix Increment Operator
	cIterator operator--();	// Prefix Decrement Operator

	cIterator operator++ (int);	// Postfix Increment Operator
	cIterator operator-- (int);	// Postfix Decrement Operator

private:
	cNode<T> *m_node;	// Pointer to private member variable m_node
};

#include "Iterator.inc"
#endif
