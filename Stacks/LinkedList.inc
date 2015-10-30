/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 4
* Filename:				LinkedList.inc
************************************************************************/

#ifndef LinkedList_i
#define LinkedList_i

#include "Exception.h"
#include "LinkedList.h"

/**************************************************************
* cLinkedList<T>::cLinkedList() 
*
*		Purpose: Default Constructor. Calls Clear() to set
*				 m_head/tail to null.
****************************************************************/
template <typename T>
cLinkedList<T>::cLinkedList()
{
	Clear();
}

/**************************************************************
* cLinkedList<T>::cLinkedList(const cLinkedList &rhs)
*
*		Purpose: Copy Constructor. Initializes m_data with a
*				 copy of itself, c.m_data and calls Clear().
*
*		MAKE THIS A DEEP COPY
****************************************************************/
template<typename T>
cLinkedList<T>::cLinkedList (const cLinkedList &c) : m_head ( c.m_head ), m_tail ( c.m_tail )
{
	Clear();
	*this = c;
}

// Destructor
template<typename T>
cLinkedList<T>::~cLinkedList()
{
	Purge();
	m_head = nullptr; m_tail = nullptr;
}

/**************************************************************
* cLinkedList<T> &cLinkedList<T>::operator= (const cLinkedList<T> &rhs)
*
*		Purpose: Assignment Operator. Checks for self
*				 assignment then purges nodes. 
*
*		Double Check
****************************************************************/
template<typename T>
cLinkedList<T> &cLinkedList<T>::operator= (const cLinkedList<T> &rhs)
{
	if (this != &rhs)
	{
		Purge();
		const cNode<T> *rhsNode = &rhs.First();
		while (rhsNode != nullptr)
		{
			Append(&rhsNode->GetData());
			rhsNode = rhsNode->GetNext();
		}
	}
	return *this;
}

/**************************************************************
* bool cLinkedList<T>::isEmpty ()
*
*		Purpose: Checks to see if LinkedList is empty and
*				 returns true if it is.
*		  Entry: None
*          Exit: If LinkedList is empty it will return true.
****************************************************************/
template<typename T>
bool cLinkedList<T>::isEmpty()
{
	return (m_head == nullptr);
}

/**************************************************************
* const cNode<T> &cLinkedList<T>::First () const
*
*		Purpose: Find the const variable m_head and returns it.
*		  Entry: None.
*          Exit: If m_head is not null then it will return
*				 m_head.
****************************************************************/
template<typename T>
const cNode<T> &cLinkedList<T>::First() const
{
	return *m_head;
}

/**************************************************************
* const cNode<T> &cLinkedList<T>::Last () const
*
*		Purpose: Find the const variable m_tail and returns it.
*		  Entry: None.
*          Exit: If m_tail is not null then it will return
*				 m_tail.
****************************************************************/
template<typename T>
const cNode<T> &cLinkedList<T>::Last() const
{
	return *m_tail;
}

/**************************************************************
* const cIterator<T> cLinkedList<T>::Begin() const
*
*		Purpose: Return the const head or start of the iterator.
*		  Entry: None.
*          Exit: Returns iterators m_head value.
****************************************************************/
template<typename T>
//const
cIterator<T> cLinkedList<T>::Begin() const
{
	return cIterator<T>(m_head);
}

/**************************************************************
* const cIterator<T> cLinkedList<T>::End() const
*
*		Purpose: Return the const tail or end of the iterator.
*		  Entry: None.
*          Exit: Returns iterators m_tail value.
****************************************************************/
template<typename T>
//const 
cIterator<T> cLinkedList<T>::End() const
{
	return cIterator<T>(m_tail);
}

/**************************************************************
* void cLinkedList<T>::Purge ()
*
*		Purpose: Clears the LinkedList of all nodes.
*		  Entry: None.
*          Exit: None; Void Function.
****************************************************************/
template<typename T>
void cLinkedList<T>::Purge()
{
	if (!isEmpty())
	{
		cNode<T> *CURR = m_head;

		while (CURR->GetNext())
		{
			cNode<T> *nDelete = CURR;
			CURR = CURR->GetNext();
			delete nDelete;
		}
		delete CURR;
		Clear();
	}
}

/**************************************************************
* void cLinkedList<T>::Prepend ( T *prp )
*
*		Purpose: Add a node to the beginning of the LinkedList.
*		  Entry: Takes in pointer variable prp of type T.
*          Exit: None; Void function.
*
*
*		Double Check
****************************************************************/
template<typename T>
void cLinkedList<T>::Prepend(const T *prp)
{
	cNode<T> *prpd = new cNode<T>(*prp);
	if (!isEmpty())
	{
		prpd->SetNext(m_head);
		m_head->SetPrev(prpd);
		m_head = prpd;
	}
	else
		m_head = m_tail = prpd;
}

/**************************************************************
* void cLinkedList<T>::Append ( T *apn )
*
*		Purpose: Add a node to end of the LinkedList.
*		  Entry: Takes in pointer variable apn of type T.
*          Exit: None; Void function.
*
*
*			Double Check
****************************************************************/
template<typename T>
void cLinkedList<T>::Append(const T *apn)
{
	cNode<T> *apnd = new cNode<T>(*apn);
	if (!isEmpty())
	{
		apnd->SetPrev(m_tail);
		m_tail->SetNext(apnd);
		m_tail = apnd;
	}
	else
		m_head = m_tail = apnd;
}

/**************************************************************
* cNode<T> &cLinkedList<T>::Extract ( T &eValue )
*
*		Purpose: Extract the specified node and returns a copy
*				 of that node.
*		  Entry: Takes in eValue which will contain the
*				 specified node.
*          Exit: Returns CURR, the specified node
****************************************************************/
template<typename T>
cNode<T>& cLinkedList<T>::Extract(T eValue)
{
	cNode<T> *CURR = m_head;

	for (cIterator<T> i(Begin()); CURR != nullptr; ++i)
	{
		if (CURR->GetData() == eValue)     
		{
			if (CURR)      
			{
				if (CURR == m_tail )      
				{
					Clear();
					return *(CURR);
				}
				else                               
				{
					m_head = CURR->GetNext();
					CURR->GetNext()->SetPrev(nullptr);
					return *(CURR);
				}
			}
			else if (CURR == m_tail)  
			{
				m_tail = CURR->GetPrev();
				CURR->GetPrev()->SetNext(nullptr);
				return *(CURR);
			}
			else                               
			{
				CURR->GetPrev()->SetNext(CURR->GetNext()); 
				CURR->GetNext()->SetPrev(CURR->GetPrev()); 
				CURR->SetNext(nullptr);  
				CURR->SetPrev(nullptr); 
				return *(CURR);        
			}
		}
	}
	return *(CURR);
}

/*********************************************************************************************************
* template<typename T>
* void LinkedList<T>::InsertAfter(T value, T* data)
*
*  Purpose:    Insert data after a node with the specified value
*
*  Entry:      value = value of node to place new data after; data = the data you want to place behind
*              the node
*
*  Exit:       New node is created after the node with the specified m_data value
*********************************************************************************************************/
template<typename T>
void cLinkedList<T>::InsertAfter(T insA, T *insANew)
{
	cNode<T> *CURR = m_head;
	for (cIterator<T> i = this->Begin(); i != this->End(); ++i)
	{
		if (CURR->GetData() == insA)
		{
			cNode<T>* PlugIn = new cNode<T>(*insANew);
			if (m_tail == CURR)       
			{
				PlugIn->SetPrev(CURR);
				PlugIn->GetPrev()->SetNext(PlugIn);
				m_tail = PlugIn;
			}
			else                           
			{
				PlugIn->SetNext(CURR->GetNext());
				PlugIn->SetPrev(CURR);
				PlugIn->GetNext()->SetPrev(PlugIn);
				PlugIn->GetPrev()->SetNext(PlugIn);
			}
		}
		else
			Append(insANew);
	}
}

/*********************************************************************************************************
* template<typename T>
* void LinkedList<T>::InsertBefore(T value, T* data)
*
*  Purpose:    Insert data before a node with the specified value
*
*  Entry:      value = value of node to place new data before; data = the data you want to place in
*              front of the node
*
*  Exit:       New node is created before the node with the specified m_data value
*********************************************************************************************************/
template<typename T>
void cLinkedList<T>::InsertBefore(T insB, T *insBNew)
{
	cNode<T> *CURR = m_head;
	for (cIterator<T> i = this->Begin(); i != this->End(); ++i)
	{
		if (CURR->GetData() == insB)
		{
			cNode<T> *plugIn = new cNode<T>(*insBNew);
			if (m_head == CURR)       
			{
				plugIn->SetNext(CURR);
				plugIn->GetNext()->SetPrev(plugIn);
				m_head = plugIn;
			}
			else                           
			{
				plugIn->SetNext(CURR);
				plugIn->SetPrev(CURR->GetPrev());
				plugIn->GetNext()->SetPrev(plugIn);
				plugIn->GetPrev()->SetNext(plugIn);
			}
		}
		else
			Prepend(insBNew);
	}
}

/**************************************************************
* void cNode<T>::Clear()
*
*		Purpose: Sets both private member variables head and
*				 tail to null.
*		  Entry: None.
*          Exit: None; Void function.
****************************************************************/
template<typename T>
void cLinkedList<T>::Clear()
{
	m_head = nullptr;
	m_tail = nullptr;
}

#endif
