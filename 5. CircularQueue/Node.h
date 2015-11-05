/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 5
* Filename:				Node.h
************************************************************************/

#ifndef Node_H
#define Node_H

/************************************************************************
* Class: Node
*
* Purpose:
*
* Constructors:
*	Node  ( T data )
*		Initializes m_data with data
*	Node  ( const Node<T> &c )
*		Copies m_data into c.m_data
*	~Node ();
*		Calls Clear()
*
* Operators:
*	Node &operator= ( const Node<T> &rhs )
*		Takes in rhs reference and assigns m_data to it
*
* Methods:
*	T &GetData ()
*		Gets a reference to data values
*	Node<T> *GetPrev ()
*		 Gets a pointer to prev values
*	Node<T> *GetNext ()
*		Gets a pointer to next values
*	const T &GetData () const
*		Gets a reference to const data values
*	const Node<T> *GetPrev () const
*		Gets a pointer to const prev values
*	const Node<T> *GetNext () const
*		Gets a pointer to const next values
*
* Mutators:
*	void SetData ( T &data )
*		Sets Data to passed in variable data
*	void SetNext ( Node<T> *nNode )
*		Sets m_next to new pointer nNode
*	void SetPrev ( Node<T> *pNode )
*		Sets m_prev to new pointer pNode	
*	void Clear();	 
*		Sets m_next and m_prev to null
************************************************************************/
template <typename T>
class Node
{
public:
	Node ();					// Default Constructor
	Node (T data);				// Single Argument Constructor
	Node (const Node &c);		// Copy Constructor
	~Node();					// Destructor

	Node &operator= ( const Node &rhs );	// Overloaded Assignment Operator

	T		 &GetData();	// Gets reference to data value
	Node<T> *GetPrev();	// Gets pointer to prev value
	Node<T> *GetNext();	// Gets pointer to next value

	const T		   &GetData() const;	// Gets reference to const data value
	const Node<T> *GetPrev() const;	// Gets pointer to const prev value
	const Node<T> *GetNext() const;	// Gets pointer to const next value

	void SetData (T &data);			// Sets reference to data value
	void SetNext (Node *nNode);	// Sets pointer next node to pointer nNode
	void SetPrev (Node *pNode);	// Sets pointer prev node to pointer pNode

private:
	void Clear();	 // Clears m_next and m_prev nodes

	T m_data;		// Private member variable m_data

	Node *m_next;	// Private member variable m_next
	Node *m_prev;  // Private member variable m_prev
};

#include "Node.inc"
#endif

