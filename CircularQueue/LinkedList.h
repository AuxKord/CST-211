/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 5
* Filename:				LinkedList.h
************************************************************************/

#ifndef LinkedList_H
#define LinkedList_H

#include "Iterator.h"
#include "Node.h"

/************************************************************************
* Class: cLinkedList
*
* Purpose:
*
* Constructors:
*	cLinkedList()
*		Initializes m_tail and m_head to null values
*	cLinkedList( const cLinkedList &rhs )
*		Copies LinkedList over to rhs
*	~cLinkedList()
*		De-allocates the Array and sets it to zero.
*
* Operators:
*	cLinkedList &operator= ( const cLinkedList &rhs )
*		Creates a copy of the LinkedList and copies it over to
*		the const rhs
*
* Methods:
*	bool isEmpty()
*		Checks LinkedList to see if it's empty or not
*	const cNode<T> &First () const
*		Returns const m_head if it's not empty
*	const cNode<T> &Last  () const
*		Returns const m_tail if it's not empty
*	cIterator<T> Begin () const
*		Returnts const iterator's head
*	cIterator<T> End   () const
*		Returns const iterator's tail
*
* Mutators:
*	void Purge()
*		Clears LinkedList
*	void Prepend ( T* pAdd )
*		Adds node at the beginning of the LinkedList
*	void Append  ( T* aAdd )
*		Adds node to the end of the LinkedList
*	cNode<T> &Extract ( T eValue );
*		Extracts specified node and drops a copy of it from the LinkedList
*	void InsertAfter  ( T aValue, T* aNode )
*		Adds node after extracted node
*	void InsertBefore ( T bValue, T* bNode )
*		Adds node before extracted node
************************************************************************/

template <typename T>
class LinkedList
{
public:
	LinkedList();								// Default Constructor
	LinkedList (const LinkedList<T> &c);		// Copy Constructor
	~LinkedList();								// Destructor

	LinkedList &operator= (const LinkedList<T> &rhs);	// Overloaded Assignment Operator

	bool isEmpty();	// Returns true if LinkedList is empty

	const cNode<T> &First() const;		// Grabs cNode's const head
	const cNode<T> &Last () const;		// Grabs cNode's const tail

	cIterator<T> Begin() const;	// Grabs the const iterators start
	cIterator<T> End  () const;  // Grabs the const iterators end
	

	void Purge();			// Clears LinkedList of all nodes
	void Prepend(const T *prp);	// Adds nodes at the front
	void Append (const T *apn);	// Adds nodes at the end

	cNode<T> &Extract (T eValue);	// Extracts specified cNode
	void InsertAfter  (T insA, T *insANew);	// Adds nodes after extracted node
	void InsertBefore (T insB, T *insBNew);	// Adds nodes before extracted node

private:
	void Clear();		  // Clears m_head and m_tail nodes
					
	cNode<T> *m_tail;	// Pointer to private member variable m_tail
	cNode<T> *m_head;   // Pointer to private member variable m_head
};

#include "LinkedList.inc"
#endif

