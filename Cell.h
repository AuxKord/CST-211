/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/20/15
* H.W. Number:			Lab 1
* Filename:				Cell.h
************************************************************************/

#ifndef Cell_H
#define Cell_H

/***************************************************************************************************
*	Class: cCell
*
<<<<<<< HEAD
*	Purpose:
*		Keeps the board for minesweeper.
*
*	Manager Functions:
=======
*	Purpose: 
*		Keeps the board for minesweeper.
*
*	Manager Functions: 
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
*		Cell ()
*			Initiates Cell state to Covered with all states set to false.
*
*	Mutators:
*		void SetMine  ()
*			Sets Cell type to a mine
*		void SetCovered ()
*			Changes Cell state to covered
*		void SetUncover ()
*			Changes Cell state to uncovered
*		void SetFlag  ()
*			Changes Cell state to flagged
*		void SetClick ()
*			Changes Cell state to clicked
*		void SetAcquaintances ( const int &Acquaintance )
*			Changes adjacent Cell types to mines
*
<<<<<<< HEAD
*	Methods:
=======
*	Methods: 
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
*	bool IsMine    () const
*		Returns m_mine if Cell type is mine
*	bool IsCovered () const
*		Returns m_covered if cell state is covered or uncovered
*	bool IsFlagged () const
*		Returns m_flagged if cell state is flagged
*	bool IsClicked () const
*		Returns m_click if cell is selected
*	int GetAcquaintances  () const
*		Returns number of Acquaintances or adjacent mines
***************************************************************************************************/

class Cell
{
public:
<<<<<<< HEAD
	Cell(); 	// Default Constructor

	bool IsMine() const;	// Gets Cell if it's type is Mine
	bool IsCovered() const;	// Gets Cell if it's state is Covered
	bool IsUnCovered() const;	// Gets Cell if it's state is Covered
	bool IsFlagged() const;	// Gets Cell if it's state is Flagged
	bool IsClicked() const;	// Gets Cell if it's state is clicked
	bool IsEmpty() const;		// Gets Cell if it's state is empty

	void SetMine();		// Sets Cell type to mine
	void SetCovered();		// Sets Cell State to covered
	void SetUncover();		// Sets Cell State to ucncovered
	void SetFlag();		// Sets Cell state to flagged
	void SetClick();		// Sets Cell state to clicked
	void SetEmpty();		// Sets Cell state to empty

	void SetAcquaintances(const int &Acquaintance);
	int GetAcquaintances() const;


=======
	Cell (); 	// Default Constructor
	
	bool IsMine    () const;	// Gets Cell if it's type is Mine
	bool IsCovered () const;	// Gets Cell if it's state is Covered
	bool IsFlagged () const;	// Gets Cell if it's state is Flagged
	bool IsClicked () const;	// Gets Cell if it's state is clicked
	
	void SetMine    ();		// Sets Cell type to mine
	void SetCovered ();		// Sets Cell State to covered
	void SetUncover ();		// Sets Cell State to ucncovered
	void SetFlag    ();		// Sets Cell state to flagged
	void SetClick   ();		// Sets Cell state to clicked
	
	void SetAcquaintances ( const int &Acquaintance );	
	int GetAcquaintances  () const;
	
	
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
private:
	bool m_mine;
	bool m_click;
	bool m_covered;
<<<<<<< HEAD
	bool m_unCovered;
	bool m_flagged;
	bool m_empty;
=======
	bool m_flagged;
>>>>>>> 4c8f2005a91609b728b443865e470d2bfaa7f4d9
	int m_acquaint;
};

#endif
