/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/20/15
* H.W. Number:			Lab 1
* Filename:				Cell.cpp
************************************************************************/
<<<<<<< HEAD
#include "Cell.h"

// Default Constructor
Cell::Cell() : m_mine(false), m_click(false),
m_covered(true), m_flagged(false),
m_acquaint(false)
{

=======

#include "Cell.h"

// Default Constructor
Cell::Cell () : m_mine     ( false ), m_click   ( false ), 
				m_covered  ( true  ), m_flagged ( false ), 
				m_acquaint ( false )
{
	
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
}

/**************************************************************
* bool Cell::IsMine () const
*
<<<<<<< HEAD
*		Purpose: Returns m_mine if Cell is a mine.
*		  Entry: None.
*          Exit: m_mine.
****************************************************************/
bool Cell::IsMine() const
=======
*		Purpose: Returns m_mine if Cell is a mine.	 
*		  Entry: None.
*          Exit: m_mine. 
****************************************************************/
bool Cell::IsMine () const
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	return m_mine;
}

/**************************************************************
* bool Cell::IsCovered () const
*
<<<<<<< HEAD
*		Purpose: Returns m_covered if Cell is covered.
*		  Entry: None.
*          Exit: m_covered.
****************************************************************/
bool Cell::IsCovered() const
=======
*		Purpose: Returns m_covered if Cell is covered.	 
*		  Entry: None.
*          Exit: m_covered. 
****************************************************************/
bool Cell::IsCovered () const
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	return m_covered;
}

/**************************************************************
<<<<<<< HEAD
* bool Cell::IsUnCovered () const
*
*		Purpose: Returns m_covered if Cell is covered.
*		  Entry: None.
*          Exit: m_covered.
****************************************************************/
bool Cell::IsUnCovered() const
{
	return m_unCovered;
}
/**************************************************************
* bool Cell:: IsFlagged () const
*
*		Purpose: Returns m_flagged if Cell is flagged
*		  Entry: None.
*          Exit: m_flagged.
****************************************************************/
bool Cell::IsFlagged() const
=======
* bool Cell:: IsFlagged () const 
*
*		Purpose: Returns m_flagged if Cell is flagged	 
*		  Entry: None.
*          Exit: m_flagged. 
****************************************************************/
bool Cell:: IsFlagged () const 
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	return m_flagged;
}

/**************************************************************
<<<<<<< HEAD
* bool Cell::IsClicked () const
*
*		Purpose: Returns m_click if Cell is a clicked
*		  Entry: None.
*          Exit: m_click.
****************************************************************/
bool Cell::IsClicked() const
=======
* bool Cell::IsClicked () const 
*
*		Purpose: Returns m_click if Cell is a clicked	 
*		  Entry: None.
*          Exit: m_click. 
****************************************************************/
bool Cell::IsClicked () const 
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	return m_click;
}

/**************************************************************
<<<<<<< HEAD
* bool Cell::IsEmpty() const
*
*		Purpose: Returns m_click if Cell is a clicked
*		  Entry: None.
*          Exit: m_click.
****************************************************************/
bool Cell::IsEmpty() const
{
	return m_empty;
}

/**************************************************************
=======
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
* void Cell::SetMine ()
*
*		Purpose: Sets Cell to a mine by setting m_mine to
*				 true.
*		  Entry: None.
<<<<<<< HEAD
*          Exit: None.
****************************************************************/
void Cell::SetMine()
=======
*          Exit: None. 
****************************************************************/
void Cell::SetMine ()
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	m_mine = true;
}

/**************************************************************
* void Cell::SetCovered ()
*
<<<<<<< HEAD
*		Purpose: Sets Cell to covered by setting m_covered to
*				 true.
*		  Entry: None.
*          Exit: None.
****************************************************************/
void Cell::SetCovered()
=======
*		Purpose: Sets Cell to covered by setting m_covered to 
*				 true.
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetCovered ()
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	m_covered = true;
}

/**************************************************************
* void Cell::SetUncover ()
*
<<<<<<< HEAD
*		Purpose: Sets Cell to uncovered by setting m_covered to
*				 false.
*		  Entry: None.
*          Exit: None.
****************************************************************/
void Cell::SetUncover()
=======
*		Purpose: Sets Cell to uncovered by setting m_covered to 
*				 false.	 
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetUncover ()
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	m_covered = false;
}

/**************************************************************
* void Cell::SetFlag ()
*
<<<<<<< HEAD
*		Purpose: Sets Cell to flagged by setting m_flagged to
*				 true.
*		  Entry: None.
*          Exit: None.
****************************************************************/
void Cell::SetFlag()
=======
*		Purpose: Sets Cell to flagged by setting m_flagged to 
*				 true.	 
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetFlag ()
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	m_flagged = true;
}

/**************************************************************
* void Cell::SetClick ()
*
<<<<<<< HEAD
*		Purpose: Sets Cell to clicked by setting m_click to
*				 true.
*		  Entry: None.
*          Exit: None.
****************************************************************/
void Cell::SetClick()
=======
*		Purpose: Sets Cell to clicked by setting m_click to 
*				 true. 
*		  Entry: None.
*          Exit: None. 
****************************************************************/
void Cell::SetClick ()
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	m_click = true;
}

/**************************************************************
<<<<<<< HEAD
* void Cell::IsEmpty()
*
*		Purpose: Sets Cell to clicked by setting m_click to
*				 true.
*		  Entry: None.
*          Exit: None.
****************************************************************/
void Cell::SetEmpty()
{
	m_empty = true;
}

/**************************************************************
* void Cell::SetAcquaintances ( const int &Acquaintance )
*
*		Purpose: Sets adjacent or acquaintance cells to mines
*				 by setting m_acquaint to Acquaintance.
*		  Entry: None.
*          Exit: None.
****************************************************************/
void Cell::SetAcquaintances(const int &Acquaintance)
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
int Cell::GetAcquaintances() const
=======
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
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
{
	return m_acquaint;
}