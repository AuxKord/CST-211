/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/20/15
* H.W. Number:			Lab 1
* Filename:				Cell.cpp
************************************************************************/

#include "Cell.h"

// Default Constructor
Cell::Cell () : m_mine     ( false ), m_click   ( false ), 
				m_covered  ( true  ), m_flagged ( false ), 
				m_acquaint ( false )
{
	
}

/**************************************************************
* bool Cell::IsMine () const
*
*		Purpose: Returns m_mine if Cell is a mine.	 
*		  Entry: None.
*          Exit: m_mine. 
****************************************************************/
bool Cell::IsMine () const
{
	return m_mine;
}

/**************************************************************
* bool Cell::IsCovered () const
*
*		Purpose: Returns m_covered if Cell is covered.	 
*		  Entry: None.
*          Exit: m_covered. 
****************************************************************/
bool Cell::IsCovered () const
{
	return m_covered;
}

/**************************************************************
* bool Cell:: IsFlagged () const 
*
*		Purpose: Returns m_flagged if Cell is flagged	 
*		  Entry: None.
*          Exit: m_flagged. 
****************************************************************/
bool Cell:: IsFlagged () const 
{
	return m_flagged;
}

/**************************************************************
* bool Cell::IsClicked () const 
*
*		Purpose: Returns m_click if Cell is a clicked	 
*		  Entry: None.
*          Exit: m_click. 
****************************************************************/
bool Cell::IsClicked () const 
{
	return m_click;
}

/**************************************************************
* void Cell::SetMine ()
*
*		Purpose: Sets Cell to a mine by setting m_mine to
*				 true.
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetMine ()
{
	m_mine = true;
}

/**************************************************************
* void Cell::SetCovered ()
*
*		Purpose: Sets Cell to covered by setting m_covered to 
*				 true.
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetCovered ()
{
	m_covered = true;
}

/**************************************************************
* void Cell::SetUncover ()
*
*		Purpose: Sets Cell to uncovered by setting m_covered to 
*				 false.	 
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetUncover ()
{
	m_covered = false;
}

/**************************************************************
* void Cell::SetFlag ()
*
*		Purpose: Sets Cell to flagged by setting m_flagged to 
*				 true.	 
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetFlag ()
{
	m_flagged = true;
}

/**************************************************************
* void Cell::SetClick ()
*
*		Purpose: Sets Cell to clicked by setting m_click to 
*				 true. 
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetClick ()
{
	m_click = true;
}

/**************************************************************
* void Cell::SetAcquaintances ( const int &Acquaintance )
*
*		Purpose: Sets adjacent or acquaintance cells to mines 
*				 by setting m_acquaint to Acquaintance.	 
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetAcquaintances ( const int &Acquaintance )
{
		m_acquaint = Acquaintance;
}

/**************************************************************
* int Cell::GetAcquaintances () const 
*
*		Purpose: Gets the number of cells that are acquaintances. 
*		  Entry: None.
*          Exit: Returns m_acquaint. 
****************************************************************/
int Cell::GetAcquaintances () const 
{
	return m_acquaint;
}