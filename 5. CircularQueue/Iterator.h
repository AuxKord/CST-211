/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 5
* Filename:				Iterator.h
************************************************************************/

#ifndef Iterator_H
#define Iterator_H

#include "Node.h"

/************************************************************************
* Class: Iterator
*
* Purpose:
*
* Constructors:
*	Iterator ()
*		Initializes m_node to null
*	Iterator ( Node<T> *Node )
*		Sets m_node to pointer Node
*	Iterator ( const Node<T> &c )
*		Copies m_node to c.m_node
*	~Iterator ()
*		Sets m_node to null
*
* Operators:
*	Iterator &operator= ( const Iterator &rhs )
*		Assigns m_node values over to rhs
*	T &operator* () const
*		De-references const m_node if it's null
*	T *operator-> () const
*		TODO
*	bool operator== ( const Iterator &rhs ) const
*		Compares iterator m_node to rhs m_node
*	bool operator!= ( const Iterator &rhs ) const
*		Compares iterator m_node to rhs m_node
*	Iterator operator++ ()
*		Uses prefix to increment iterator
*	Iterator operator-- ()
*		Uses prefix to decrement iterator
*	Iterator operator++ ( int )
*		Uses postfix to increment iterator
*	Iterator operator-- ( int )
*		Uses postfix to decrement iterator
************************************************************************/

template <typename T>
class Iterator
{
public:
	Iterator();						// Default Constructor
	Iterator (Node<T> *Node);			// Single Argument Constructor
	Iterator (const Iterator<T> &c);	// Copy Constructor
	~Iterator();						// Destructor

	const Node<T> *GetNode() const;

	Iterator &operator= (const Iterator<T> &rhs);		// Assignment Operator Overload
	T		  &operator*() const;						// De-reference Operator
	T		  *operator->() const;						// Pointer Access Operator

	bool operator== (const Iterator<T> &rhs) const;		// Comparison Operator Overload
	bool operator!= (const Iterator<T> &rhs) const;		// Comparison Operator Overload

	Iterator operator++();	// Prefix Increment Operator
	Iterator operator--();	// Prefix Decrement Operator

	Iterator operator++ (int);	// Postfix Increment Operator
	Iterator operator-- (int);	// Postfix Decrement Operator

private:
	Node<T> *m_node;	// Pointer to private member variable m_node
};

#include "Iterator.inc"
#endif
