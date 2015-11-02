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
* Class: cNode
*
* Purpose:
*
* Constructors:
*	cNode  ( T data )
*		Initializes m_data with data
*	cNode  ( const cNode<T> &c )
*		Copies m_data into c.m_data
*	~cNode ();
*		Calls Clear()
*
* Operators:
*	cNode &operator= ( const cNode<T> &rhs )
*		Takes in rhs reference and assigns m_data to it
*
* Methods:
*	T &GetData ()
*		Gets a reference to data values
*	cNode<T> *GetPrev ()
*		 Gets a pointer to prev values
*	cNode<T> *GetNext ()
*		Gets a pointer to next values
*	const T &GetData () const
*		Gets a reference to const data values
*	const cNode<T> *GetPrev () const
*		Gets a pointer to const prev values
*	const cNode<T> *GetNext () const
*		Gets a pointer to const next values
*
* Mutators:
*	void SetData ( T &data )
*		Sets Data to passed in variable data
*	void SetNext ( cNode<T> *nNode )
*		Sets m_next to new pointer nNode
*	void SetPrev ( cNode<T> *pNode )
*		Sets m_prev to new pointer pNode	
*	void Clear();	 
*		Sets m_next and m_prev to null
************************************************************************/
template <typename T>
class cNode
{
public:
	cNode ();					// Default Constructor
	cNode (T data);				// Single Argument Constructor
	cNode (const cNode &c);		// Copy Constructor
	~cNode();					// Destructor

	cNode &operator= ( const cNode &rhs );	// Overloaded Assignment Operator

	T		 &GetData();	// Gets reference to data value
	cNode<T> *GetPrev();	// Gets pointer to prev value
	cNode<T> *GetNext();	// Gets pointer to next value

	const T		   &GetData() const;	// Gets reference to const data value
	const cNode<T> *GetPrev() const;	// Gets pointer to const prev value
	const cNode<T> *GetNext() const;	// Gets pointer to const next value

	void SetData (T &data);			// Sets reference to data value
	void SetNext (cNode *nNode);	// Sets pointer next node to pointer nNode
	void SetPrev (cNode *pNode);	// Sets pointer prev node to pointer pNode

private:
	void Clear();	 // Clears m_next and m_prev nodes

	T m_data;		// Private member variable m_data

	cNode *m_next;	// Private member variable m_next
	cNode *m_prev;  // Private member variable m_prev
};

#include "Node.inc"
#endif

