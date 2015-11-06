/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 3
* Filename:				Deck.h
* 
* Class: Deck
*
* Purpose:
*	Constructors:

*
*	Destructor:

*
*	Operators:

*
*	Accessors:

*
*	Mutators:
************************************************************************/
#ifndef Deck_H
#define Deck_H

class Deck
{
public:
	Deck();
	Deck(char suit, int rank);
	Deck(const Deck &c);
	~Deck() {}

	Deck &operator= (const Deck &rhs)
	{
		mSuit = rhs.mSuit;
		mRank = rhs.mRank;
		return *this;
	}

	int GetSuit () const { return mSuit; }
	char GetRank() const { return mRank; }

	bool redCard();

	void SetSuit(char suit) { mSuit = suit; }
	void SetRank(int rank)  { mRank = rank; }

private:
	int mSuit;
	char mRank;
};



#endif